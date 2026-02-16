# 🛠️ Actividad 9: Configuración inicial del ESP32 + WiFi Scan (En equipo, entrega individual)

## 🎯 Objetivo
Configurar el entorno de desarrollo para **ESP32** en **Arduino IDE** y comprobar su funcionamiento cargando el ejemplo **WiFiScan**, verificando en el Monitor Serial que el ESP32 detecta redes WiFi cercanas 📡.

---

## ✅ Requisitos
- 1 ESP32 (cualquier variante común)
- Cable USB (datos)
- Computadora con acceso a internet
- Arduino IDE instalado (se instalará en el paso 1)

---

## 1) ⬇️ Instalar Arduino IDE
1. Descarga e instala **Arduino IDE** (versión recomendada: 2.x).
2. Abre Arduino IDE y verifica que inicia correctamente.

---

## 2) 🔌 Instalar el Add-on del ESP32 en Arduino IDE
1. En Arduino IDE, abre:
   - **File → Preferences** (o **Archivo → Preferencias**)
2. En **Additional Boards Manager URLs** agrega esta URL:```https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json```
   - Si ya tienes otras URLs, sepáralas con coma.
3. Abre el gestor de tarjetas:
   - **Tools → Board → Boards Manager** (o **Herramientas → Placa → Gestor de tarjetas**)
5. Busca **esp32** e instala:
   - **“esp32 by Espressif Systems”**

---

## 3) 🧩 Configurar placa y puerto
1. Conecta el ESP32 por USB.
2. Selecciona la placa:
   - **Tools → Board → esp32 →** (elige tu modelo, por ejemplo **“ESP32 Dev Module”**)
3. Selecciona el puerto:
   - **Tools → Port →** (elige el puerto correspondiente al ESP32)

> 💡 Si no aparece el puerto, prueba cambiar cable USB, otro puerto USB o instalar el driver del chip USB del ESP32 (CH340 / CP2102).

---

## 4) 📶 Cargar el ejemplo WiFiScan
1. Abre el ejemplo:
   - **File → Examples → WiFi → WiFiScan**
2. Compila y sube al ESP32:
   - Click en **Verify** ✅ (opcional)
   - Click en **Upload** ➡️
3. Abre el **Serial Monitor**:
   - **Tools → Serial Monitor**
4. Ajusta la velocidad (baud rate) a:
   - **115200**
5. Verifica que se imprimen redes detectadas, por ejemplo:
   - “scan start”
   - “scan done”
   - Lista de SSID y RSSI

---

## 📦 Entregable (OBLIGATORIO)
✅ **1 screenshot** donde se vea claramente:
- La ventana del **Monitor Serial**
- El ESP32 **listando redes WiFi detectadas** (SSID)
- (Ideal) que también se vea el **baud rate 115200** y/o que el programa sea WiFiScan

📌 Sube tu screenshot en la plataforma indicada por tu profesor/a.

---

## 🧾 Criterios de evaluación (rápidos)
- **Arduino IDE instalado y funcional** ✅
- **ESP32 Add-on instalado correctamente** ✅
- **Placa y puerto configurados** ✅
- **WiFiScan cargado y mostrando redes** ✅
- **Screenshot claro y completo** 🖼️✅
