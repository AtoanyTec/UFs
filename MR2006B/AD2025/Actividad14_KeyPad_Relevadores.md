# Actividad 14 - Control de Relevadores con Teclado Matricial

## 1. 🎯 OBJETIVO
Implementar un sistema de control de relevadores que demuestre competencia en:
- ⌨️ Manejo de teclado matricial como interfaz de entrada
- 📟 Interfaz de usuario en display OLED
- ⚡ Control de relevadores de potencia
- 💡 Control de cargas de alta potencia (100W)

## 2. 📝 DESCRIPCIÓN DE LA ACTIVIDAD
Las/los estudiantes desarrollarán un sistema que permita seleccionar y controlar relevadores mediante un teclado matricial. La interfaz OLED guiará al usuario en la selección y mostrará el estado actual de los relevadores, incluyendo el control de un foco de 100W. Para realizar la  actividad, necesitas descargar la librería keypad desarrollada por Mark Stanley y Alexander brevig enel siguiente enlace:
[Librería Keypad](https://github.com/Chris--A/Keypad)

## 3. 📦 MATERIAL REQUERIDO
- 🎹 1 MKR WiFi 1010 + Carrier Rev2
- ⌨️ 1 Teclado matricial 4x4
- 📟 1 Display OLED integrado
- ⚡ 2 Relevadores integrados en Carrier Rev2
- 💡 1 Foco incandescente de 100W
- 🔌 1 Portalámparas con cable
- 🔌 Cables de conexión
- 🔌 Fuente de voltaje externa para el foco

## 4. 🛠️ DESARROLLO DE LA ACTIVIDAD
```cpp
// REQUERIMIENTOS PRINCIPALES:
// 1. ⌨️ Leer entrada del teclado matricial 4x4
// 2. 📟 Mostrar interfaz en OLED: "Seleccione relevador: 1 o 2"
// 3. ⚡ Activar relevador 1 (foco 100W) con tecla '1'
// 4. ⚡ Activar relevador 2 (sin carga) con tecla '2'
// 5. 📊 Mostrar estado actual de ambos relevadores en tiempo real
// 6. 🔄 Permitir cambiar entre relevadores en cualquier momento
// 7. ⚠️ Indicar claramente qué relevador está activo
// 8. ⌨️ Colocar el MKR Carrier dentro de su carcasa
```

## 5. 🛠️ CONEXIÓN DE UN RELEVADOR
<img width="941" height="432" alt="image" src="https://github.com/user-attachments/assets/8a9d8bd1-f94e-4e72-84a3-b5f04c5c794d" />


## 6. 📋 CÓDIGOS DE AYUDA
- [Relévadores](https://github.com/AtoanyTec/UFs/blob/main/MR2006B/AD2025/MKRWiFi1010/Codes/Relevador.ino)
- [Teclado Matricial](https://github.com/AtoanyTec/UFs/blob/main/MR2006B/AD2025/MKRWiFi1010/Codes/Keypad.ino)

## 7. 📋 ENTREGABLES
- A. 🔌 Circuito Físico Funcional
- B. 💻 Código Implementado
- C. 📹 Video Demostración

## 8. ⚠️ MEDIDAS DE SEGURIDAD
Para el foco de 100W:
- 🔌 Usar fuente de poder externa adecuada (120V/220V)
- 👁️ Tener mucho cuidado al trabajar con 120/220V
- ⚠️ Tenner cuidado de no quemar el puerto USB de la PC o del MKR WiFi 1010
- 🔒 Aislar completamente los circuitos de alta potencia
- 👁️ Supervisión constante durante las pruebas
- 🛑 Protocolo de apagado de emergencia claro

## 9. ✅ LISTA DE COTEJO PARA EVALUACIÓN
**⌨️ FUNCIONALIDAD DEL TECLADO (20 puntos)**
- ✅ Tecla '1' activa/desactiva relevador 1 (10 pts)
- ✅ Tecla '2' activa/desactiva relevador 2 (10 pts)

**📟 INTERFAZ OLED (20 puntos)**
- ✅ Muestra instrucciones claras (5 pts)
- ✅ Indica estado actual de ambos relevadores (5 pts)
- ✅ Actualización en tiempo real (5 pts)
- ✅ Diseño claro y legible (5 pts)

**⚡ CONTROL DE RELEVADORES (20 puntos)**
- ✅ Relevador 1 controla foco de 100W correctamente (10 pts)
- ✅ Relevador 2 se activa/desactiva correctamente (10 pts)

**🔧 CÓDIGO Y SEGURIDAD (20 puntos)**
- ✅ Código bien estructurado y comentado (10 pts)
- ✅ Medidas de seguridad implementadas (10 pts)

**🎥 VIDEO DEMOSTRATIVO (20 puntos)**
- ✅ Mostrar la activación de relevadores con el teclado (5 pts)
- ✅ Demostrar el encendido/apagado de foco de 100W (5 pts)
- ✅ Mostrar interfaz OLED en funcionamiento (5 pts)
- ✅ Mostrar el MKR Carrier dentro de su carcasa (5 pts)

## 10. 🔄 BONUS
- 🕒 Agregar temporizador para apagado automático (5 pts)
- 🔔 Añadir notificaciones sonoras (5 pts)





