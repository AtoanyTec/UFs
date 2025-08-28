# 3. Interfaz de Usuario de MATLAB

## 🎯 Objetivo del Módulo
Familiarizarse con el entorno de desarrollo de MATLAB, identificar las ventanas principales y aprender a crear, editar y ejecutar scripts de manera eficiente.

## 3.1 🏗️ Descripción del Editor y Escritorio de MATLAB
Al abrir MATLAB, verás un entorno integrado con varias ventanas. Esta disposición se llama el Escritorio (Desktop) de MATLAB

## 3.2 ▶️ Ejecutar Scripts
Un script es un archivo de texto (con extensión ```.m```) que contiene una secuencia de comandos de MATLAB. Ejecutar un script es equivalente a escribir todos esos comandos uno por uno en la Command Window.

**Pasos para Crear y Ejecutar un Script:**
1. 📄 Crear un Nuevo Script:
   + Ve a la pestaña HOME.
   + Haz clic en New Script (o presiona ```Ctrl + N```).
2. ✍️ Escribir el Código:
```matlab
% Mi primer script
% Este script calcula el área de un círculo

radio = 5;
area = pi * radio^2;

fprintf('El área de un círculo con radio %.2f es %.2f\n', radio, area);
```

3. 💾 Guardar el Script:
   + Haz clic en el icono Save (💾) o presiona ```Ctrl + S```.
   + ¡Asígnalo un nombre descriptivo! (ej: ```calcular_area.m```). No uses espacios ni tildes.
  
4. 🚀 Ejecutar el Script:
   Tienes varias opciones:
   + Botón Run (▶️): Haz clic en el botón verde "Run" en la pestaña EDITOR.
   + Teclado: Presiona F5 en tu teclado.
   + Command Window: Escribe el nombre del script (sin la extensión ```.m```) en la Command Window y presiona ```Enter```.
```matlab
>> calcular_area
El área de un círculo con radio 5.00 es 78.54
```

---

✨ **Consejo Final:** Tómate un tiempo para explorar y personalizar tu escritorio (Layout). Arrastra y acomoda las ventanas como más te convenga. Un espacio de trabajo organizado ¡te hará mucho más productivo!











