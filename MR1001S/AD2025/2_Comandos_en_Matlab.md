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
 
  ## ▶️ Ejecutar comandos
  * ⌨️ **Ventana de Comandos:** La forma más inmediata. Escribe la instrucción y presiona ```Enter```.
  * 📜 **Scripts o Archivos .m:** La forma profesional y de repetir tareas.
    1. Haz clic en "New Script"
    2. Escribe tus comandos en el editor
    3. Guarda el archivo (ej: ```mi_primer_script.m```).
    4. Ejecútalo de una de estas formas:
       + Presionando el botón "Run" (▶️) en el editor
       + Tecleando el nombre del script en la Ventana de Comandos: ```>> mi_primer_script```.

## 🏷️ Nombrar variables
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


## 💾 Salvar y cargar variables
 Para no perder tu trabajo y compartir datos entre sesiones.

* 💾 Salvar (```save```): Guarda las variables del Espacio de Trabajo (Workspace) en un archivo ```.mat```.
```matlab
>> save('mis_datos.mat')          % Guarda TODAS las variables en el archivo
>> save('solo_importantes.mat', 'total', 'precio') % Guarda solo las variables 'total' y 'precio'
```
* 📂 Cargar (```load```): Recupera las variables desde un archivo ```.mat``` al Workspace.














