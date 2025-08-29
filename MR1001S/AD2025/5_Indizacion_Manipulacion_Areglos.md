# 5. Indización y Manipulación de Arreglos

## 🎯 Objetivo
Dominar el acceso y la modificación de elementos específicos dentro de vectores y matrices utilizando diferentes métodos de indexación.

## 5.1 🧮 Índices para Extraer y Modificar Elementos
La indexación es la forma de acceder a elementos específicos dentro de un arreglo usando su posición. MATLAB usa indexación 1-based (el primer elemento está en la posición 1).

**Sintaxis Básica:**
* ```A(fila, columna)``` - Para matrices
* ```A(posición)``` - Para vectores

### Extracción de Elementos:
```matlab
>> M = [10 20 30; 40 50 60; 70 80 90];

>> elemento = M(2, 3) % Elemento en fila 2, columna 3
elemento =
    60

>> fila_completa = M(1, :) % Los dos puntos (:) significan "todas las columnas"
fila_completa =
    10    20    30

>> columna_completa = M(:, 2) % Todas las filas, columna 2
columna_completa =
    20
    50
    80
```
### Modificación de Elementos:
```matlab
>> M(1, 1) = 999; % Cambia el elemento (1,1) a 999
>> M(3, :) = [100, 200, 300] % Cambia toda la tercera fila
>> M(:, 2) = 0 % Cambia toda la segunda columna a ceros
```

## 5.2 🔍 Indización dentro de Arreglos
Puedes usar vectores de índices para acceder a múltiples elementos no contiguos.
```matlab
>> V = [10 20 30 40 50 60 70 80 90 100];

>> indices = [1, 3, 5, 7]; % Vector de índices
>> elementos_seleccionados = V(indices)
elementos_seleccionados =
    10    30    50    70

>> indices_filas = [1, 3];
>> indices_columnas = [2, 3];
>> submatriz = M(indices_filas, indices_columnas) % Extrae una submatriz
```

## 5.3 🎯 Extracción Múltiple de Elementos
### Indexación Lineal:
MATLAB permite tratar matrices como vectores, contando elementos columna por columna.
```matlab
>> M = [10 20 30; 40 50 60; 70 80 90]
M =
    10    20    30
    40    50    60
    70    80    90

>> M(5) % Cuenta por columnas: (1,1)=1, (2,1)=2, (3,1)=3, (1,2)=4, (2,2)=5
ans =
    50

>> indices = [1, 5, 9]; % Primero, quinto y noveno elemento
>> M(indices)
ans =
    10    50    90
```

### Máscaras Lógicas (Avanzado):
```matlab
>> mascara = M > 50 % Crea una matriz lógica con true donde se cumple la condición
mascara =
  3×3 logical array
   0   0   0
   0   0   1
   1   1   1

>> elementos_mayores = M(mascara) % Extrae elementos donde mascara es true
elementos_mayores =
    70
    80
    60
    90
```































