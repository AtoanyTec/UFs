# 4. Matrices y Vectores en MATLAB

## 🎯 Objetivo
Aprender a crear y manipular arreglos (vectores y matrices), que son las estructuras de datos fundamentales en MATLAB para trabajar con datos de manera eficiente.

## 4.1 📦 Crear Variables con Múltiples Elementos
En MATLAB, un vector es una lista de números y una matriz es una tabla rectangular de números. Son la base de todo cálculo.

* **Crear un Vector Fila:** Usa corchetes ```[ ]``` y separa los elementos con comas ```,``` o espacios.
* 
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
`` 
* **Crear una Matriz:** Combina las reglas anteriores. Los elementos de una fila se separan por comas o espacios, y las filas se separan entre sí por punto y coma ```;```.
```matlab
>> matriz = [1, 2, 3; 4, 5, 6; 7, 8, 9]
matriz =
     1     2     3
     4     5     6
     7     8     9
```
