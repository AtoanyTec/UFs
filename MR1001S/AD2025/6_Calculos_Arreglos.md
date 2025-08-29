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



















