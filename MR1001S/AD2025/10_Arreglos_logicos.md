# 10. Arreglos Lógicos en MATLAB
## 🎯 Objetivo
Aprender a utilizar expresiones lógicas y indexación lógica para manipular y filtrar datos de manera eficiente en MATLAB.

## 11.1 🧠 Utilización de Expresiones Lógicas para Manipulación de Arreglos
Los arreglos lógicos son arrays que contienen únicamente valores ```true``` (1) o ```false``` (0). Son extremadamente útiles para filtrar y manipular datos basados en condiciones.

### Creación de Arreglos Lógicos:
```matlab
% A partir de comparaciones directas
>> vector = [5, 12, 8, 3, 15];
>> logico = vector > 10
logico =
  1×5 logical array
   0   1   0   0   1

% Combinando condiciones con operadores lógicos
>> condicion = (vector > 5) & (vector < 15)
condicion =
  1×5 logical array
   0   1   1   0   0
```

### Operadores Lógicos:
|  Operador  |  Descripción      |  Ejemplo  |
|------------|-------------------|-----------|
|```==```    |Igual a            |``À==B```  |
|```~=```    |No igual a         |``À~=B```  |
|```<```     |Menor que          |``À==B```  |
|```>```     |Mayor que          |``À==B```  |
|```<=```    |Menor o igual que  |``À==B```  |
|```>=```    |Mayor o igual que  |``À==B```  |
|```&```     |AND lógico         |``À==B```  |
|```|```     |OR lógico          |``À==B```  |
|```~```     |NOT lógico         |``À==B```  |

### Funciones Útiles para Arreglos Lógicos:
```matlab
>> any(vector > 10)  % Verifica si ALGÚN elemento cumple la condición
ans =
  logical
   1

>> all(vector > 2)   % Verifica si TODOS los elementos cumplen la condición
ans =
  logical
   1

>> find(vector > 10) % Encuentra los ÍNDICES de elementos que cumplen la condición
ans =
     2     5
```

## 11.2 🎯 Indización Lógica
La indexación lógica permite seleccionar elementos de un arreglo usando una condición lógica en lugar de índices numéricos.

### Filtrado de Datos:
```matlab
>> datos = [12, 45, 23, 67, 45, 98, 13, 5, 45];
>> datos_altos = datos(datos > 50) % Selecciona solo valores mayores a 50
datos_altos =
    67    98

>> datos_pares = datos(mod(datos, 2) == 0) % Selecciona solo números pares
datos_pares =
    12    98
```
### Modificación Selectiva de Datos:
```matlab
>> precios = [10.5, 25.0, 8.75, 42.0, 15.3];
>> precios(precios > 20) = precios(precios > 20) * 0.9; % Aplica 10% de descuento a precios > 20
precios =
   10.5000   22.5000    8.7500   37.8000   15.3000
```

### Con Matrices:
```matlab
>> M = magic(4)
M =
    16     2     3    13
     5    11    10     8
     9     7     6    12
     4    14    15     1

>> M(M > 10) = 0 % Establece a cero todos los valores mayores a 10
M =
     0     2     3     0
     5     0     0     8
     9     7     6     0
     4     0     0     1
```

### Indexación Lógica con Múltiples Condiciones:
```matlab
>> edades = [25, 32, 18, 45, 22, 60, 17, 38];
>> jovenes_adultos = edades(edades >= 18 & edades <= 35)
jovenes_adultos =
    25    32    22

>> datos = [10, NaN, 25, Inf, 30];
>> datos_validos = datos(isfinite(datos)) % Filtra NaN e Inf
datos_validos =
    10    25    30
```

## 💡 Aplicaciones Prácticas:
### Limpieza de Datos:
```matlab
% Eliminar valores atípicos (outliers) de un conjunto de datos
>> temperaturas = [22.5, 23.1, 150.0, 22.8, 23.5, -10.0, 23.2];
>> media = mean(temperaturas, 'omitnan');
>> desviacion = std(temperaturas, 'omitnan');
>> rango_valido = (temperaturas > media - 2*desviacion) & (temperaturas < media + 2*desviacion);
>> temperaturas_limpias = temperaturas(rango_valido)
temperaturas_limpias =
   22.5000   23.1000   22.8000   23.5000   23.2000
```

### Clasificación de Datos:
```matlab
% Clasificar estudiantes según sus calificaciones
>> calificaciones = [85, 92, 45, 78, 63, 95, 58, 72];
>> aprobados = calificaciones(calificaciones >= 70)
aprobados =
    85    92    78    95    72

>> reprobados = calificaciones(calificaciones < 70)
reprobados =
    45    63    58
```

### Análisis de Imágenes:
```matlab
% Segmentar una imagen basada en intensidad
>> imagen = imread('foto.jpg');
>> imagen_gris = rgb2gray(imagen);
>> mascara = imagen_gris > 128; % Crear máscara para pixels brillantes
>> imagen_segmentada = imagen;
>> imagen_segmentada(repmat(~mascara, [1, 1, 3])) = 0; % Aplicar máscara
>> imshow(imagen_segmentada)
```

## ✨ Consejos Avanzados:
### Combina indexación lógica y numérica:
```matlab
>> M = magic(5);
>> filas_pares = M(2:2:end, :) % Filas pares usando indexación numérica
>> columnas_especificas = M(:, [1, 3, 5]) % Columnas específicas
```

### Usa ```find``` para obtener índices numéricos a partir de condiciones lógicas:
```matlab
>> datos = [10, 20, 30, 40, 50];
>> indices = find(datos > 25) % Encuentra posiciones donde datos > 25
indices =
     3     4     5
```

### Aplica funciones específicas a subconjuntos de datos:
```matlab
>> valores = [12, 15, 8, 20, 5, 18];
>> media_altos = mean(valores(valores > 10)) % Media de valores > 10
media_altos =
   16.25
```

### Crea máscaras complejas combinando múltiples condiciones:
```matlab
% Datos de estudiantes: [edad, calificación]
>> estudiantes = [25, 85; 19, 92; 32, 45; 22, 78];
>> buenos_estudiantes = estudiantes(estudiantes(:,1) > 20 & estudiantes(:,2) >= 70, :)
buenos_estudiantes =
    25    85
    22    78
```

---

🔍 La indexación lógica es una de las herramientas más poderosas de MATLAB para manipulación y análisis de datos. Domínala y podrás escribir código más eficiente y expresivo.














