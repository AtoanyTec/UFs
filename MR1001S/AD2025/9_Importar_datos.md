# 9. Importar Datos Externos en MATLAB

## 🎯 Objetivo
Aprender a importar datos desde archivos externos a MATLAB, utilizando diferentes métodos y herramientas, con especial énfasis en el trabajo con tablas.

## 10.1 📂 Importar Datos de Archivos Externos
MATLAB puede importar datos desde una variedad de formatos de archivo. Los más comunes son:
### Archivos de Texto (.txt, .csv):
```matlab
% Importar datos de un archivo CSV
datos = csvread('datos.csv'); % Para datos numéricos simples

% Importar datos con encabezados y tipos mixtos
datos = readtable('datos.csv'); % Recomendado para datos complejos
```

### Archivos de Excel (.xlsx, .xls):
```matlab
% Leer una hoja específica de Excel
datos = xlsread('archivo.xlsx', 'Hoja1'); % Para datos numéricos

% Leer datos como tabla
datos_tabla = readtable('archivo.xlsx', 'Sheet', 'Hoja1');
```

### Archivos de Imagen, Audio y Video:
```matlab
% Importar una imagen
imagen = imread('imagen.jpg');

% Importar audio
[audio, frecuencia] = audioread('audio.wav');

% Leer video
video = VideoReader('video.mp4');
```

## 10.2 🛠️ Herramientas para Importar Datos
### Import Tool (Interfaz Gráfica):
La forma más fácil de importar datos es usando la Import Tool:

1. En la pestaña HOME, haz clic en Import Data
2. Selecciona tu archivo (CSV, Excel, TXT, etc.)
3. Previsualiza los datos y ajusta las opciones de importación
4. Selecciona si quieres importar como vector, matriz o tabla
5. Haz clic en Import Selection y elige generar script o función

```matlab
% MATLAB generará código similar a este:
opts = delimitedTextImportOptions("NumVariables", 3);
opts.DataLines = [2, Inf];
opts.Delimiter = ",";
opts.VariableNames = ["Fecha", "Temperatura", "Humedad"];
opts.VariableTypes = ["datetime", "double", "double"];
datos = readtable("datos_clima.csv", opts);
```

### Funciones Específicas por Tipo de Archivo:
```matlab
% Para JSON
datos = jsondecode(fileread('datos.json'));

% Para XML
datos = xmlread('datos.xml');

% Para MAT (archivos nativos de MATLAB)
datos_cargados = load('datos_guardados.mat');
```

## 10.3 📊 Importar Datos como Tablas
Las tablas son la forma más poderosa de trabajar con datos heterogéneos en MATLAB.

### Crear una Tabla desde Cero:
```matlab
nombres = {'Ana'; 'Juan'; 'María'};
edades = [25; 32; 28];
ciudades = {'Madrid'; 'Barcelona'; 'Sevilla'};

tabla_datos = table(nombres, edades, ciudades, ...
                   'VariableNames', {'Nombre', 'Edad', 'Ciudad'});
```

### Leer Datos Directamente como Tabla:
```matlab
% Desde CSV
tabla = readtable('datos.csv');

% Desde Excel
tabla = readtable('datos.xlsx', 'Sheet', 'Hoja1');

% Especificar opciones de importación
opts = detectImportOptions('datos.csv');
opts = setvartype(opts, {'Fecha'}, 'datetime');
tabla = readtable('datos.csv', opts);
```

### Trabajar con Datos en Tablas:
```matlab
% Acceder a una columna
nombres = tabla.Nombre; % o tabla{:,'Nombre'}

% Filtrar datos
adultos = tabla(tabla.Edad >= 18, :);

% Agregar nueva columna
tabla.EdadEnDecadas = tabla.Edad / 10;

% Resumir datos
resumen = summary(tabla);
```

### Exportar Tablas:
```matlab
% Exportar a CSV
writetable(tabla, 'resultados.csv');

% Exportar a Excel
writetable(tabla, 'resultados.xlsx', 'Sheet', 'Datos');

% Exportar solo algunas columnas
writetable(tabla(:, {'Nombre', 'Edad'}), 'datos_reducidos.csv');
```

---

✨ Con estas herramientas, puedes importar, manipular y analizar datos de diversas fuentes de manera eficiente, aprovechando el poder de las tablas de MATLAB para organizar información compleja.

