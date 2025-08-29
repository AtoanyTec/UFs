# 7. Funciones

## 🎯 Objetivo
Aprender a trabajar con funciones que devuelven múltiples resultados y comprender cómo asignar y utilizar estas salidas de manera efectiva.

## 7.1 📤 Llamada de Funciones con Salidas Múltiples
En MATLAB, muchas funciones pueden devolver más de un valor de retorno. Esto es especialmente útil para funciones que calculan múltiples resultados relacionados

### Sintaxis Básica:
```matlab
[salida1, salida2, ..., salidaN] = nombre_funcion(entrada1, entrada2, ...)
```

### Ejemplo con Función Predefinida:
La función ```size``` devuelve las dimensiones de una matriz:
```matlab
>> A = [1 2 3; 4 5 6; 7 8 9];

>> [filas, columnas] = size(A) % Asigna ambas salidas
filas =
     3
columnas =
     3

>> solo_filas = size(A) % Si solo pides una salida, obtienes solo la primera
solo_filas =
     3     3
```

### Ejemplo con Función max:
```matlab
>> vector = [5, 2, 9, 1, 7];

>> [valor_maximo, posicion] = max(vector)
valor_maximo =
     9
posicion =
     3

% También funciona con matrices
>> M = [1 5 3; 4 2 6];
>> [max_val, max_idx] = max(M)
max_val =
     4     5     6
max_idx =
     2     1     2
```

## 📊 Función sort (Ordenamiento)
```matlab
>> datos = [5, 2, 9, 1, 7];

>> [datos_ordenados, indices_orden] = sort(datos)
datos_ordenados =
     1     2     5     7     9
indices_orden =
     4     2     1     5     3
```

## 🔄 Ignorar Salidas con la Tilde (~)
Puedes usar el carácter ```~``` para ignorar salidas que no necesitas:
```matlab
>> [~, solo_indices] = sort(datos) % Ignora los valores ordenados
solo_indices =
     4     2     1     5     3

>> [valores, ~] = max(M) % Ignora las posiciones de los máximos
valores =
     4     5     6
```


## 🧩 Creando Tu Propia Función con Múltiples Salidas
Para crear una función con múltiples salidas, usa esta sintaxis en un archivo .m:

### archivo: ```calculo_estadisticas.m```
```matlab
function [media, desviacion, varianza] = calculo_estadisticas(datos)
    % Calcula múltiples estadísticas de un conjunto de datos
    media = mean(datos);
    desviacion = std(datos);
    varianza = var(datos);
end
```

### Uso de la función:
```matlab
>> datos = [10, 15, 12, 18, 20];
>> [promedio, std_dev, var] = calculo_estadisticas(datos)
promedio =
   15
std_dev =
   4.1231
var =
   17
```

## 📝 Ejemplo Avanzado: Resolver Ecuación Cuadrática
### archivo: ```ecuacion_cuadratica.m```
```matlab
function [x1, x2] = ecuacion_cuadratica(a, b, c)
    % Resuelve la ecuación ax² + bx + c = 0
    discriminante = b^2 - 4*a*c;
    x1 = (-b + sqrt(discriminante)) / (2*a);
    x2 = (-b - sqrt(discriminante)) / (2*a);
end
```

### Uso de la función:
```matlab
>> [raiz1, raiz2] = ecuacion_cuadratica(1, -5, 6)
raiz1 =
     3
raiz2 =
     2
```

## 💡 Consejos Prácticos:
1. Consulta la ayuda: Siempre usa help nombre_funcion para ver cuántas salidas tiene una función y en qué orden las devuelve.
2. Nombra variables descriptivas: Usa nombres significativos para las salidas para mejorar la legibilidad del código.
3. Usa ~ para salidas no deseadas: Mejora la claridad del código cuando no necesitas algunas salidas.
4. Verifica con ejemplos simples: Prueba las funciones con entradas pequeñas para entender el formato de salida.

```matlab
% Ejemplo de buena práctica
>> [matriz_autovectores, matriz_autovalores] = eig([2 1; 1 2])
matriz_autovectores =
   -0.7071    0.7071
    0.7071    0.7071
matriz_autovalores =
     1     0
     0     3
```

--- 

✨ ¡Las funciones con múltiples salidas hacen que tu código sea más eficiente y organizado! Ahora puedes procesar y analizar datos de manera más efectiva.
















