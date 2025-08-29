# 4. Matrices y Vectores en MATLAB

## 🎯 Objetivo
Aprender a crear y manipular arreglos (vectores y matrices), que son las estructuras de datos fundamentales en MATLAB para trabajar con datos de manera eficiente.

## 4.1 📦 Crear Variables con Múltiples Elementos
En MATLAB, un vector es una lista de números y una matriz es una tabla rectangular de números. Son la base de todo cálculo.

* **Crear un Vector Fila:** Usa corchetes ```[ ]``` y separa los elementos con comas ```,``` o espacios.
```matlab
>> vector_fila = [1, 2, 3, 4, 5] % Con comas
vector_fila =
     1     2     3     4     5

>> vector_fila2 = [10 20 30 40] % Con espacios
vector_fila2 =
    10    20    30    40
```
* **Crear un Vector Columna** Usa corchetes ```[ ]``` y separa los elementos con punto y coma ```;```.
```matlab
>> vector_columna = [1; 2; 3; 4]
vector_columna =
     1
     2
     3
     4
```

* **Crear una Matriz:** Combina las reglas anteriores. Los elementos de una fila se separan por comas o espacios, y las filas se separan entre sí por punto y coma ```;```.

```matlab
>> matriz = [1, 2, 3; 4, 5, 6; 7, 8, 9]
matriz =
     1     2     3
     4     5     6
     7     8     9
```

## 4.2 ✏️ Asignación y Modificación Manual de Elementos
Puedes modificar un elemento específico de un vector o matriz refiriéndote a su posición (índice).

* **Modificar un Elemento:**
```matlab
>> A = [10 20 30; 40 50 60];
>> A(2, 3) = 999 % Cambia el elemento en la fila 2, columna 3
A =
    10    20    30
    40    50   999
```

* **Modificar una Fila o Columna Completa:**
```matlab
>> A(1, :) = [100, 200, 300] % Cambia toda la primera fila
A =
   100   200   300
    40    50   999

>> A(:, 2) = [0; 0] % Cambia toda la segunda columna
A =
   100     0   300
    40     0   999
```

## 4.3 📶 Creación de Vectores con Elementos Igualmente Espaciados
Es muy común necesitar crear vectores de números consecutivos o con un espaciado fijo. Hay dos métodos principales:
* **Operador dos puntos ```:``` (Más común): ```inicio:incremento:final```**
```matlab
>> 1:5 % Si no se especifica incremento, por defecto es 1
ans =
     1     2     3     4     5

>> 0:2:10 % Vector desde 0 hasta 10, en pasos de 2
ans =
     0     2     4     6     8    10

>> 5:-1:1 % También funciona con incrementos negativos
ans =
     5     4     3     2     1
```

* **Función ```linspace```: ```linspace(valor_inicial, valor_final, número_de_puntos)```.** Crea un vector con un número específico de puntos, equidistantes entre sí.
```matlab
>> linspace(0, 10, 5) % 5 puntos entre 0 y 10
ans =
     0    2.5000    5.0000    7.5000   10.0000
```

## 4.4 🧰 Funciones para la Creación de Arreglos
MATLAB tiene funciones muy útiles para crear arreglos con valores específicos sin tener que escribirlos manualmente.

| Función           | Ejemplo           | Resultado                              | Descripción                                                   |
|-------------------|-------------------|----------------------------------------|---------------------------------------------------------------|
| ```zeros```       | ```zeros(2, 3)``` | ```[0 0 0; 0 0 0]```                   | Crea una matriz de puros zeros                                |
| ```ones```        | ```ones(1, 4)```  | ```[1 1 1 1]```                        | Crea una matriz de puros unos                                 |
| ```rand```        | ```rand(2, 2)```  | ```[0.8147 0.1270; 0.9058 0.9134]```   | Crea una matriz de números aleatorios entre 0 y 1.s           |
| ```eye```         | ```eye(3)```      | ```[1 0 0; 0 1 0; 0 0 1]```            | Crea una matriz identidad (unos en la diagonal)               |
| ```magic```       | ```magic(3)```    | ```[8 1 6; 3 5 7; 4 9 2]```            | Crea un cuadrado mágico (sumas de filas/columnas iguales).    |

## Ejemplo
```matlab
% 🚀 Ejemplo de aplicación: Crear una cuadrícula para una gráfica 3D
>> x = linspace(-2, 2, 50); % 50 puntos entre -2 y 2 en el eje X
>> y = linspace(-1, 1, 30); % 30 puntos entre -1 y 1 en el eje Y
>> [X, Y] = meshgrid(x, y); % Crea matrices de coordenadas para la gráfica
>> Z = X.^2 + Y.^2; % Calcula valores para el eje Z (una parábola)
>> surf(X, Y, Z) % Crea la gráfica de superficie
```

---
✨ **Consejo Final:** La práctica hace al maestro. Juega con estas funciones, crea diferentes tamaños de arreglos y usa el Workspace de MATLAB para visualizar cómo se ven. ¡Esto es el corazón de la programación en MATLAB!



















