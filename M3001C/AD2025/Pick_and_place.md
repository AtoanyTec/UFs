# Pick and Place con Cobot Lite6 🧩📦

## 📝 Subcompetencia a evaluar
**SIIT0101** - Explicación del funcionamiento de sistemas y dispositivos ingenieriles
## Nivel de dominio
**SIIT0102C** - Demuestra el funcionamiento de sistemas o dispositivos ingenieriles mediante la selección de las reglas fundamentales que definen la estructura del sistema estudiado con el fin de generar resultados o comportamientos deseados.
Crea prototipos físicos o conceptuales, aplicando metodologías científicas, que representan el funcionamiento del sistema o dispositivo ingenieril estudiado.

## 🎯 Objetivo
Al finalizar esta actividad, el estudiante será capaz de:

1. Comprender los componentes básicos y los principios de seguridad de un cobot UFactory Lite6. 📚⚙️
2. Operar el cobot de manera segura en sus modos de funcionamiento manual (jogging) y automático. 🕹️➡️🤖
3. Configurar herramientas y entornos de trabajo dentro del software UFactory Studio (o UFO). 🛠️💻
4. Programar una tarea básica de "pick and place" utilizando el método de arrastrar y soltar (drag & drop) o programación por demostración. 👆🧩👇
5. Identificar y solucionar problemas básicos de posicionamiento y sujeción. 🔍❌✅

## 2. Materiales y Equipos por Estación de Trabajo 🧰

* 1 Cobot UFactory Lite6. 🤖
* 1 Controlador del cobot y cable de alimentación. 🔌
* 1 Computadora con el software UFactory Studio instalado. 💻
* 1 Herramienta de sujeción (Pinza neumática o eléctrica) instalada en el EF (End Effector) del cobot. 🦾✋
* Conjunto de objetos para manipular (e.g., cubos de diferentes colores, tuercas, piezas pequeñas). 🧊🔴🟢🟡
* Zona de trabajo delimitada (mesa con áreas de "Origen" y "Destino" marcadas). 📦🔄📥
* Elementos de Seguridad CRÍTICOS: 🚨
    - Parada de emergencia probada y accesible. 🔴
 
## Introducción Teórica 📖

La tarea de "Pick and Place" (recoger y colocar) es una de las aplicaciones más fundamentales en la robótica industrial y colaborativa. Consiste en que el robot recoja un objeto de una ubicación predefinida y lo deposite en otra. Su simplicidad lo hace ideal para aprender los conceptos básicos de la programación y operación de robots, como la definición de puntos de referencia, la planificación de trayectorias y la gestión de entradas/salidas digitales (para activar la pinza).

El cobot Lite6 de UFactory se programa de manera intuitiva, permitiendo arrastrar y soltar bloques de funciones, lo que lo hace perfecto para una introducción práctica sin necesidad de profundos conocimientos de código. 👆🧩👇

## Procedimiento Paso a Paso 🚶‍♂️🚶‍♀️

**Fase 1: Seguridad y Puesta en Marcha 🚦**

1. Revisión de seguridad: El docente repasará las normas de seguridad: mantener el área de trabajo despejada, conocer la ubicación del botón de parada de emergencia y nunca ingresar a la celda de trabajo mientras el robot está en modo automático. 👮‍♂️⚠️
2. Encendido: Conecten la alimentación del controlador y enciendan el cobot. 🔌➡️🤖
3. Conexión: En la computadora, abran el software UFactory Studio y conectenlo al cobot. 💻🔗🤖

**Fase 2: Familiarización con el Software y Modo Manual 🖱️🕹️**
1. Modo Jogging: Pongan el cobot en modo "Manual" o "Jog".
2. Práctica de Movimiento: Usando los controles de jogging en el software (o el botón de demostración en el brazo), muevan el cobot en los distintos sistemas de coordenadas:
   - Coordenadas Articulares (Joints): Muevan cada articulación individualmente. 🔄
   - Coordenadas Cartesianas (World/Tool): Muevan el efector final en las direcciones X, Y, Z lineales. ↔️↕️
   - Enseñar Puntos: Lleven el robot a una posición inicial segura y guárdenla como "Home". 🏠

**Fase 3: Configuración de la Herramienta y Entorno 🛠️**
1. Definir Herramienta (TCP): Configuren el TCP (Tool Center Point) en la punta de las pinzas abiertas. ✨🦾
2. Definir Objetivo (Work Object): Definan el sistema de coordenadas de la mesa de trabajo. Esto facilitará la programación si la mesa se mueve. 🗺️

**Fase 4: Programación de la Tarea "Pick and Place" 👆🧩👇**
1. Planificación: Identifiquen y marquen físicamente en la mesa:
   - Punto de Aproximación (Approach): Un punto seguro sobre el objeto a recoger. ⬇️
   - Punto de Pick: Donde las pinzas cerrarán sobre el objeto. ✋✅
   - Punto de Aproximación (Departure): Un punto seguro para elevar el objeto después de recogerlo. ⬆️
   - Punto de Place: Donde el robot soltará el objeto. 📥

2. Enseñar Puntos Clave: Muevan manualmente el robot a cada uno de estos puntos y guárdenlos con nombres descriptivos (e.g., "Approach_Pick", "Pick", "Place"). 💾📍
3. Crear el Programa:
   - Inicien un nuevo programa. 📝
   - Usando la interfaz de bloques, arrastren y suelten los siguientes comandos en secuencia:
     * ```MoveJ([Home])``` // Movimiento articular a la posición segura. 🔄🏠
     * ```MoveL([Approach_Pick])``` // Movimiento lineal al punto de aproximación. ➡️⬇️
     * ```MoveL([Pick])``` // Movimiento lineal al punto de recogida. ➡️✋
     * ```Set_DO(1, ON)``` // Activar la pinza (Salida Digital 1 = ON). 🔌✋
     * ```Delay(0.5)``` // Esperar medio segundo para asegurar el agarre. ⏸️
     * ```MoveL([Approach_Pick])``` // Volver al punto de aproximación. ⬆️
     * ```MoveJ([Home])``` // Movimiento articular a home (trayectoria rápida). 🔄🏠
     * ```MoveL([Place])``` // Movimiento lineal al punto de colocación. ➡️📥
     * ```Set_DO(1, OFF)``` // Desactivar la pinza (soltar el objeto). 🔌👋
     * ```Delay(0.5)``` ⏸️
     * ```MoveL([Home])``` // Regresar a la posición inicial. ➡️🏠

4. Simulación: Usen la función de simulación del software para verificar la trayectoria y detectar posibles colisiones antes de ejecutarla en el robot real. 🤖➡️💻

**Fase 5: Ejecución y Optimización 🚀**
1. Ejecución: Pongan el robot en modo automático, manténganse fuera de la celda y ejecuten el programa. 🤖▶️
2. Observación: Observen la ejecución. ¿Es suave? ¿Precisa? 👀
3. Optimización: 💡 Los movimientos deben de ser precisos y eficientes
4. Programa el robot para que la tarea se realice en un bucle 3 veces asegurando que tenga repetitibilidad

## Cuestionario y Análisis ❓📊
1. ❓¿Por qué es crucial definir un punto de "Aproximación" antes del punto de "Pick"?
2. ❓Describa la diferencia entre un comando MoveJ (movimiento articular) y un MoveL (movimiento lineal). ¿Cuándo usaría cada uno?
3. ❓Mencione dos medidas de seguridad que aplicó durante la práctica y por qué son importantes.
4. ❓Si la pinza no se activaba en el punto correcto, ¿qué parámetro o configuración verificaría?

## Criterios de Evaluación 📝
1. Seguridad (20%): 🚨 Cumplimiento de protocolos de seguridad en todo momento.
2. Manejo del Software (20%): 💻 Capacidad para conectar, joggear y enseñar puntos correctamente.
3. Programa Funcional (40%): ✅ El programa de "pick and place" se ejecuta completa y correctamente sin intervención del docente.
4. Análisis (20%): 📊 Respuestas al cuestionario reflexivas y técnicas.

## ¡Manos a la obra! ¡A programar el futuro! 🤖✨
