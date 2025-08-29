# 6 Cálculos Utilizando Arreglos

## 🎯 Objetivo
Aprender a realizar operaciones matemáticas con arreglos de manera eficiente, comprendiendo la diferencia crucial entre operaciones elemento por elemento y operaciones matriciales.

## 6.1 ➕ Operaciones con Arreglos (Elemento por Elemento)
Las operaciones elemento por elemento realizan cálculos entre los elementos correspondientes de dos arreglos del mismo tamaño, o entre un arreglo y un escalar.

### Operaciones con Escalares:
```matlab
>> A = [1 2 3; 4 5 6];
>> B = A + 5 % Suma 5 a cada elemento
B =
     6     7     8
     9    10    11

>> C = A * 2 % Multiplica cada elemento por 2
C =
     2     4     6
     8    10    12

>> D = A .^ 2 % Eleva cada elemento al cuadrado
D =
     1     4     9
    16    25    36
```

### Operaciones Entre Arreglos:
Para operaciones elemento por elemento entre dos arreglos, se usa un punto (.) antes del operador:

|Operación        |Símbolo  |Ejemplo                |Resultado      |
|-----------------|---------|-----------------------|---------------|
|Multiplicación   |```.*```  |```[1,2] .* [3,4]```  |```[3, 8]```   |
|División         |```./```  |```[6,8] ./ [2,4]```  |```[3, 2]```   |
|Potenciación     |```.^```  |```[2,3] ./ [2,3]```  |```[4, 27]```  |

```matlab
>> A = [1 2; 3 4];
>> B = [5 6; 7 8];

>> C = A .* B % Multiplicación elemento por elemento
C =
     5    12
    21    32

>> D = A ./ B % División elemento por elemento
D =
    0.2000    0.3333
    0.4286    0.5000

>> E = A .^ B % Potenciación elemento por elemento
E =
           1          64
        2187       65536
```

## 6.2 ✖️ Operaciones Matriciales
Las operaciones matriciales siguen las reglas del álgebra lineal. Son fundamentalmente diferentes a las operaciones elemento por elemento.

### Multiplicación Matricial:
Se usa el operador ```*``` (sin punto). El número de columnas de la primera matriz debe igualar al número de filas de la segunda.

```matlab
>> A = [1 2; 3 4]; % Matriz 2x2
>> B = [5 6; 7 8]; % Matriz 2x2

>> C = A * B % Multiplicación matricial
C =
    19    22
    43    50

% Cálculo: 
% (1*5 + 2*7) = 19, (1*6 + 2*8) = 22
% (3*5 + 4*7) = 43, (3*6 + 4*8) = 50
```

### Transposición de Matriz:
Se usa el apóstrofo (```'```) para transponer una matriz (intercambiar filas por columnas).
```matlab
>> A = [1 2 3; 4 5 6]
A =
     1     2     3
     4     5     6

>> A'
ans =
     1     4
     2     5
     3     6
```

### Funciones Matriciales Avanzadas:
```matlab
>> A = [3 1; 1 2];

>> determinante = det(A) % Cálculo del determinante
determinante =
     5

>> inversa = inv(A) % Cálculo de la matriz inversa
inversa =
    0.4000   -0.2000
   -0.2000    0.6000

>> identidad = A * inv(A) % Debe dar la matriz identidad
identidad =
    1.0000         0
    0.0000    1.0000
```

## 💡 Aplicaciones Prácticas:
### Cálculo de Distancias:
```matlab
% Calcular distancias euclidianas entre puntos
>> puntos = [1 2; 3 4; 5 6];
>> origen = [0 0];

>> distancias = sqrt(sum((puntos - origen).^2, 2))
distancias =
    2.2361
    5.0000
    7.8102
```

### Transformación de Datos:
```matlab
% Normalizar datos entre 0 y 1
>> datos = [10 20 30; 40 50 60];
>> minimo = min(datos(:));
>> maximo = max(datos(:));

>> datos_normalizados = (datos - minimo) / (maximo - minimo)
datos_normalizados =
         0    0.2    0.4
    0.6    0.8    1.0
```

### Sistema de Ecuaciones Lineales:
```matlab
% Resolver el sistema: 
% 2x + y = 5
% x - 3y = -1

>> A = [2 1; 1 -3];
>> B = [5; -1];

>> X = inv(A) * B % Solución: x=2, y=1
X =
    2
    1
```

---
## ✨ Consejos Finales:
1. Verifica dimensiones: Siempre asegúrate de que los arreglos tengan dimensiones compatibles para la operación que quieres realizar.
2. Usa paréntesis: Las operaciones en MATLAB siguen un orden de precedencia. Usa paréntesis para evitar ambigüedades.
3. Prueba con datos pequeños: Antes de aplicar operaciones a grandes conjuntos de datos, prueba con arreglos pequeños para verificar que obtienes los resultados esperados.
4. Consulta la ayuda: Usa help ops para ver todos los operadores disponibles y sus funcionalidades.




















