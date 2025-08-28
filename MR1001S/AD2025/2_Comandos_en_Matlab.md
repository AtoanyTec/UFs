# 2 📟 Comandos en MATLAB

## 🎯 Objetivo del módulo
Que el estudiante se familiriace con el entorno de trabajo de MATLAB, aprenda a realizar cálculos básicos, crear y gestionar variables, y utilice las funciones predefinidas más comunes.

## 2.1 ➕ Comandos para realizar cálculos en Matlab y crear variables
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
 
  ## 2.2 ▶️ Ejecutar comandos
  * ⌨️ **Ventana de Comandos:** La forma más inmediata. Escribe la instrucción y presiona ```Enter```.
  * 📜 **Scripts o Archivos .m:** La forma profesional y de repetir tareas.
    1. Haz clic en "New Script"
    2. Escribe tus comandos en el editor
    3. Guarda el archivo (ej: ```mi_primer_script.m```).
    4. Ejecútalo de una de estas formas:
       + Presionando el botón "Run" (▶️) en el editor
       + Tecleando el nombre del script en la Ventana de Comandos: ```>> mi_primer_script```.

## 2.3 🏷️ Nombrar variables
Las reglas para crear nombres de variables válidos y recomendables son cruciales.
* 📏 Reglas Estrictas (MATLAB no lo aceptará si no):
  + Deben comenzar con una letra.
  + Pueden contener letras, números y el guión bajo (```_```).
  + No pueden contener espacios, símbolos (como ```@```, ```#```, ```$```, ```%```) ni tildes.
  + Distingue entre mayúsculas y minúsculas (```MiVariable``` y ```mivariable``` son diferentes).
  + No puede ser una palabra clave de MATLAB (ej: ```if```, ```for```, ```end```).
* 💡 Buenas Prácticas (Tu yo del futuro te lo agradecerá):
  + Usa nombres descriptivos. ```velocidad_promedio``` es mucho mejor que ```vp``` o ```x```.
  + Utiliza snake_case (```velocidad_promedio```) o camelCase (```velocidadPromedio```) para mejorar la legibilidad.
  + ⚠️ Evita usar nombres de funciones predefinidas (```sin```, ```cos```, ```length```). Si lo haces, "sobrescribes" la función.
* ✅ Ejemplos:
  + **Válidos y buenos:** ```altura_edificio```, ```fuerzaResultanteX```, ```contador1```
  + **Válidos pero malos:** ```a```, ```x1```, ```temp``` (son muy genéricos y no significan nada).
  + ❌ **Inválidos:** ```2resultados``` (empieza con número), ```mi-variable``` (tiene guión), ```end``` (es palabra clave).


## 2.4 💾 Salvar y cargar variables
 Para no perder tu trabajo y compartir datos entre sesiones.

* 💾 Salvar (```save```): Guarda las variables del Espacio de Trabajo (Workspace) en un archivo ```.mat```.
```matlab
>> save('mis_datos.mat')          % Guarda TODAS las variables en el archivo
>> save('solo_importantes.mat', 'total', 'precio') % Guarda solo las variables 'total' y 'precio'
```
* 📂 Cargar (```load```): Recupera las variables desde un archivo ```.mat``` al Workspace.

```matlab
>> load('mis_datos.mat')          % Carga todas las variables del archivo
>> load('solo_importantes.mat', 'total') % Carga solo la variable 'total' del archivo
```

* 👆 También puedes usar el Workspace:
  + Puedes hacer clic derecho en una variable y seleccionar "Save As..." para guardarla
  + Puedes hacer doble clic en un archivo ```.mat``` en la ventana "Current Folder" para cargarlo.
 
## 2.5 📚 Funciones predefinidas
MATLAB tiene una enorme biblioteca de funciones listas para usar. Una función toma unos datos de entrada (argumentos), realiza una operación y devuelve un resultado (salida).

* 📖 Sintaxis General: ```resultado = nombreFuncion(argumento1, argumento2)```
* 🧮 Funciones Matemáticas Comunes:
```matlab
>> raiz = sqrt(25)        % √ Raíz cuadrada -> raiz = 5
>> valor_absoluto = abs(-3) % | | Valor absoluto -> valor_absoluto = 3
>> seno_30 = sind(30)     % Seno de 30 grados -> seno_30 = 0.5
>> redondeo = round(3.1416) % Redondear -> redondeo = 3
>> redondeo_arriba = ceil(3.1416) % Redondear hacia arriba -> redondeo_arriba = 4
>> exponencial = exp(2)   % e^2 -> exponencial ≈ 7.389
>> logaritmo = log(10)    % Logaritmo natural (base e) de 10 -> logaritmo ≈ 2.302
```

* 🔧 Funciones de Utilidad:
```matlab
>> tamaño = size([1, 2, 3; 4, 5, 6]) % Devuelve [filas, columnas] de una matriz
>> longitud = length([10, 20, 30, 40]) % Devuelve la longitud de un vector -> 4
>> quien = who           % Lista las variables en el Workspace
>> clear variable_name   % 🗑️ Elimina la variable 'variable_name' del Workspace
>> clc                   % 🧹 Limpia la Ventana de Comandos (no borra variables)
```

* ❓ ¡Cómo aprender más!: Usa la función help seguida del nombre de cualquier función para obtener una explicación detallada y ejemplos. Es tu mejor amiga.
```matlab
>> help sqrt
>> help mean
```













