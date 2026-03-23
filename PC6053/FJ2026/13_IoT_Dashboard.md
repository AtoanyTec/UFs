# 🛰️ Práctica 13: Control de LEDs en Arduino IoT Cloud con sensor PIR y botón en dashboard

## 🎯 Objetivo
Integrar un sistema de automatización básica en **Arduino IoT Cloud** utilizando un **sensor PIR** para detectar presencia y controlar indicadores visuales en el **dashboard**. Además, implementar el encendido de un **LED físico** mediante un **botón virtual** en la nube.

## 🧠 Competencias a desarrollar
- Integración de hardware con plataformas IoT  
- Programación de variables en Arduino IoT Cloud  
- Control de actuadores desde un dashboard  
- Monitoreo de estados en tiempo real  
- Relación entre sensores físicos y visualización en la nube  

## 🧰 Materiales
- 1 tarjeta compatible con Arduino IoT Cloud  
- 1 sensor PIR  
- 3 LEDs  
- 3 resistencias de 220 Ω  
- Protoboard y cables Dupont  
- Computadora con acceso a internet  
- Cuenta en Arduino IoT Cloud  

## 📘 Descripción de la práctica
En esta actividad deberás conectar un **sensor PIR** para detectar presencia en el salón. Cuando el sensor detecte movimiento o presencia:

- se deberá encender un **LED en el dashboard** que represente el estado de las **luces del salón**
- se deberá encender un **segundo LED en el dashboard** que represente el estado del **aire acondicionado**

Adicionalmente:

- se deberá colocar un **botón en el dashboard**
- al presionar ese botón, se deberá encender un **tercer LED físico** conectado a la tarjeta

## ⚙️ Funcionamiento esperado

### Parte 1. Detección de presencia
- Si el sensor PIR detecta presencia:
  - LED virtual “Luces del salón” = **encendido**
  - LED virtual “Aire acondicionado” = **encendido**

- Si el sensor PIR no detecta presencia:
  - LED virtual “Luces del salón” = **apagado**
  - LED virtual “Aire acondicionado” = **apagado**

### Parte 2. Control manual desde dashboard
- Si el botón del dashboard está en **ON**:
  - el **LED físico** se enciende

- Si el botón del dashboard está en **OFF**:
  - el **LED físico** se apaga

## 🛠️ Variables sugeridas en Arduino IoT Cloud
- `presencia` → tipo `boolean`, solo lectura  
- `lucesSalon` → tipo `boolean`, lectura y visualización en dashboard  
- `aireAcondicionado` → tipo `boolean`, lectura y visualización en dashboard  
- `ledManual` → tipo `boolean`, lectura/escritura desde dashboard  

## 🔌 Conexión sugerida

### Sensor PIR
- VCC → 5V o 3.3V según el modelo  
- GND → GND  
- OUT → pin digital de entrada  

### LED físico controlado desde dashboard
- Ánodo del LED → pin digital de salida mediante resistencia de 220 Ω  
- Cátodo del LED → GND  

## 💻 Lógica general del programa
1. Leer el estado del sensor PIR  
2. Guardar el valor en la variable `presencia`  
3. Si hay presencia:
   - activar `lucesSalon`
   - activar `aireAcondicionado`
4. Si no hay presencia:
   - desactivar `lucesSalon`
   - desactivar `aireAcondicionado`
5. Leer el estado de la variable `ledManual`
6. Encender o apagar el LED físico según el estado del botón del dashboard  

## 🧪 Procedimiento
1. Realiza el diagrama de conexiones antes de armar el circuito.  
2. Conecta el sensor PIR a la tarjeta.  
3. Conecta el LED físico que será controlado desde el dashboard.  
4. Ingresa a **Arduino IoT Cloud**.  
5. Crea las variables necesarias.  
6. Diseña un dashboard que incluya:
   - un indicador LED para “Luces del salón”
   - un indicador LED para “Aire acondicionado”
   - un botón para controlar el LED físico  
7. Programa la tarjeta para:
   - leer el sensor PIR
   - actualizar las variables del dashboard
   - controlar el LED físico desde el botón virtual  
8. Verifica el funcionamiento completo del sistema.  

## 🎥 Entregable

### 📹 Video (máximo 2 minutos)
En el video se debe observar claramente:
- el circuito físico armado  
- la detección de presencia con el sensor PIR  
- el dashboard mostrando el encendido de los dos LEDs virtuales  
- el botón del dashboard activando y desactivando el LED físico  
- una breve explicación del funcionamiento  

### 📄 Código fuente comentado
Debes entregar el programa utilizado, incluyendo comentarios que expliquen las partes más importantes.

### 🧠 Respuestas breves
1. ¿Qué función cumple el sensor PIR en este sistema?  
2. ¿Por qué los LEDs del dashboard representan una simulación del estado del aire acondicionado y las luces?  
3. ¿Qué diferencia hay entre controlar un actuador físico y mostrar un estado en el dashboard?  
4. ¿Qué ventajas tiene usar Arduino IoT Cloud en sistemas de automatización?  
5. ¿Qué mejora agregarías a este sistema para hacerlo más útil en un salón inteligente?  

## 📊 Rúbrica de evaluación

| Criterio | Excelente (100-95) | Bueno (94-85) | Suficiente (84-75) | Insuficiente (<75) |
|----------|--------------------|---------------|--------------------|--------------------|
| Funcionamiento del sensor PIR | Detecta presencia correctamente y actualiza el dashboard sin errores | Detecta presencia con errores menores | Detecta presencia de forma parcial o inestable | No detecta presencia correctamente |
| Dashboard en Arduino IoT Cloud | Los dos LEDs virtuales funcionan correctamente y representan el sistema de forma clara | Funciona casi completo con pequeños detalles | Solo uno de los indicadores funciona correctamente | No funciona o no se evidencia |
| Control del LED físico desde botón | El botón controla perfectamente el LED físico | Funciona con pequeños errores | Funciona de manera parcial | No funciona |
| Integración hardware-software | La conexión y programación están bien integradas | Presenta pequeños errores de integración | La integración es limitada | No hay integración funcional |
| Claridad del video y explicación | Evidencia clara, explicación completa y ordenada | Evidencia suficiente con explicación aceptable | Evidencia parcial o poco clara | No permite verificar el funcionamiento |
| Código y respuestas | Código comentado y respuestas completas y correctas | Código o respuestas con detalles menores | Código poco claro o respuestas incompletas | No entrega código o respuestas |
