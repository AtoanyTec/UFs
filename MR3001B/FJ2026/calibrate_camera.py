import cv2
import numpy as np
import time
import argparse
from pathlib import Path

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--camera", type=int, default=0)
    parser.add_argument("--width", type=int, default=640)
    parser.add_argument("--height", type=int, default=480)
    parser.add_argument("--chess_cols", type=int, default=9, help="Número de esquinas internas en columnas")
    parser.add_argument("--chess_rows", type=int, default=6, help="Número de esquinas internas en filas")
    parser.add_argument("--square_size_m", type=float, default=0.024, help="Tamaño del cuadro en METROS")
    parser.add_argument("--samples", type=int, default=25)
    parser.add_argument("--out", type=str, default="camera_calib.npz")
    args = parser.parse_args()

    cap = cv2.VideoCapture(args.camera)
    cap.set(cv2.CAP_PROP_FRAME_WIDTH, args.width)
    cap.set(cv2.CAP_PROP_FRAME_HEIGHT, args.height)

    pattern_size = (args.chess_cols, args.chess_rows)

    # Puntos 3D del tablero en su sistema de coordenadas (z=0)
    objp = np.zeros((args.chess_rows * args.chess_cols, 3), np.float32)
    objp[:, :2] = np.mgrid[0:args.chess_cols, 0:args.chess_rows].T.reshape(-1, 2)
    objp *= args.square_size_m

    objpoints = []  # 3D
    imgpoints = []  # 2D

    print("\nCalibración de cámara")
    print("- Muestra el tablero completo en pantalla.")
    print("- Presiona 'c' para capturar una muestra cuando detecte el tablero.")
    print("- Presiona 'q' para salir.\n")

    captured = 0
    criteria = (cv2.TERM_CRITERIA_EPS + cv2.TERM_CRITERIA_MAX_ITER, 30, 0.001)

    while True:
        ret, frame = cap.read()
        if not ret:
            print("No se pudo leer la cámara.")
            break

        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        found, corners = cv2.findChessboardCorners(gray, pattern_size, None)

        vis = frame.copy()
        if found:
            corners2 = cv2.cornerSubPix(gray, corners, (11, 11), (-1, -1), criteria)
            cv2.drawChessboardCorners(vis, pattern_size, corners2, found)
            cv2.putText(vis, "Tablero detectado. Presiona 'c' para capturar.", (10, 30),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 255, 0), 2)
        else:
            cv2.putText(vis, "No se detecta tablero.", (10, 30),
                        cv2.FONT_HERSHEY_SIMPLEX, 0.6, (0, 0, 255), 2)

        cv2.putText(vis, f"Muestras: {captured}/{args.samples}", (10, 60),
                    cv2.FONT_HERSHEY_SIMPLEX, 0.6, (255, 255, 255), 2)

        cv2.imshow("Calibration", vis)
        key = cv2.waitKey(1) & 0xFF

        if key == ord('c') and found:
            objpoints.append(objp.copy())
            imgpoints.append(corners2)
            captured += 1
            print(f"Capturada muestra {captured}/{args.samples}")
            time.sleep(0.2)

            if captured >= args.samples:
                break

        if key == ord('q'):
            break

    cap.release()
    cv2.destroyAllWindows()

    if captured < 10:
        print("Muy pocas muestras. Captura al menos 10 para calibrar.")
        return

    print("\nCalibrando... (esto puede tardar unos segundos)")
    image_size = (args.width, args.height)
    ret, K, dist, rvecs, tvecs = cv2.calibrateCamera(objpoints, imgpoints, image_size, None, None)

    print(f"RMS reprojection error: {ret:.6f}")
    print("Matriz K:\n", K)
    print("Distorsión:\n", dist)

    out_path = Path(args.out)
    np.savez(out_path, K=K, dist=dist, width=args.width, height=args.height,
             chess_cols=args.chess_cols, chess_rows=args.chess_rows, square_size_m=args.square_size_m)
    print(f"\nGuardado: {out_path.resolve()}")

if __name__ == "__main__":
    main()
