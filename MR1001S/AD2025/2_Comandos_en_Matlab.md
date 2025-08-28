# 📟 Comandos en MATLAB

## 🎯 Objetivo del módulo
Que el estudiante se familiriace con el entorno de trabajo de MATLAB, aprenda a realizar cálculos básicos, crear y gestionar variables, y utilice las funciones predefinidas más comunes.

## ➕ Comandos para realizar cálculos en Matlab y crear variables
MATLAB es, en su esencia, una gigantesca calculadora. La forma más directa de usarlo es tecleando comandos en la Ventana de Comandos (Command Window).

* 🧮 **Cálculos Directos:** Escribe operaciones matemáticas y presiona Enter para obtener el resultado
```matlab
>> 5 + 3
ans =
     8

>> 10 / 2 + 4^2 % ^ es para potencia
ans =
    21
```

``àns```es una variable temporal que guarda automáticamente el último resultado calculado.

* 📦 **Creación de Variables:** Para almacenar valores y usarlos después, asígnalos a variables usando el signo =.
```matlab
>> precio = 150.50;
>> iva = 0.16;
>> total = precio * (1 + iva)
total =
  174.5800
```

Punto y coma (```;```): Si se coloca al final del comando, suprime la salida en pantalla. La variable se crea, pero no se muestra su valor.
* ➗ **Operadores Básicos:**
  - ```+``` (suma), ```-``` (resta), ```*``` (multiplicación), ```/``` (división).
  - ```^``` (potenciación).
  - ```()``` (paréntesis para definir prioridad).
