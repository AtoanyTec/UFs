# 🛰️ Proyecto Final - Sistema de Control y Monitoreo Inteligente

## 🎯 OBJETIVO GENERAL

Desarrollar un sistema integral de control y monitoreo que combine control local, IoT, sensores e interfaces visuales para aplicaciones de automatización y seguridad.

## 📋 ESPECIFICACIONES TÉCNICAS DETALLADAS
**1. 🎨 Control de LEDs RGB**

Requerimientos:
- Encendido/Apagado local mediante botones táctiles del Carrier
- Encendido/Apagado remoto vía Arduino IoT Cloud
- Estados de los LEDs en un dashboard en Arduino IoT Cloud y en el display OLED

**2. 🌡️ Sistema de Control de Temperatura**

Requerimientos:
- Monitoreo continuo de temperatura en Arduino IoT Cloud utilizando el sensor integrado
- Umbral automático: 25°C
- Activación de relevador para foco de 100W en caso de que se supera el umbral
- Control manual remoto vía IoT del encendido del foco
- Estado del foco en el dashboard de Arduino IoT Cloud

**3. 📡 Detección de Movimiento y Gestos**

Requerimientos:
- Detección de movimiento vertical/horizontal --> Encendido de un segundo de un led rojo local y virtual
- Detección de gesto UP --> Encendido del buzzer durante un segundo, estado del buzzer en el Arduino IoT Cloud

**4. 📊 Interfaz OLED Integral**

Requerimientos:
- Estados de todos los componentes del sistema (LEDs, Foco, Buzzer)
- Valores de sensores en tiempo real
- Diseño organizado y legible

## 🔧 MATERIAL REQUERIDO
**Componentes Electrónicos**

| Componente | Cantidad | Especificaciones | Notas |
|------------|----------|------------------|-------|
| **Placa Principal** | | | |
| Arduino MKR WiFi 1010 | 1 | Microcontrolador IoT | Incluye conectividad WiFi |
| MKR IoT Carrier Rev2 | 1 | Shield con periféricos | Display OLED, sensores, LEDs integrados |
| **Sensores** | | | |
| Sensor de Temperatura Integrado | 1 | Rango: -55°C a 150°C | Precisión: ±0.5°C |
| **Actuadores y Cargas** | | | |
| Foco Incandescente | 1 | 100W, 120V/220V | **¡PRECAUCIÓN! Alto voltaje** |
| Portalámparas con Cable | 1 | E27 estándar | Con cable de alimentación |
| **Fuentes de Poder** | | | |
| Fuente para Arduino | 1 | 5V DC, 2.5A | USB-C o barrel jack |
| Fuente para Foco | 1 | 120VAC o 220VAC |  |
| **Cables y Conectores** | | | |
| Cables Jumper | 10 | M-M, 20cm | Para conexiones |
| Protoboard | 1 | 400 puntos | Para conexiones temporales |
| **Herramientas** | | | |
| Multímetro Digital | 1 | - | Para mediciones y pruebas |
| Pelacables | 1 | - | Para preparar cables |
| Cinta Aislante | 1 | Rollo | Para aislamiento eléctrico |


**⚠️ Advertencias de Seguridad**

1. **ALTO VOLTAJE** - El foco de 100W opera a 120V/220V
2. **Aislamiento** - Mantener circuitos de alto y bajo voltaje separados
3. **Supervisión** - No dejar el sistema encendido sin supervisión
4. **Conexiones** - Verificar todas las conexiones antes de energizar


## 🚀 ENTREGABLES
- Código completo con comentarios en github (URL)
- Circuito físico funcionando
- Dashboard IoT Cloud configurado
- Video demostrativo (5 min max)
- Reporte técnico con:
    1. Diagramas de conexión
    2. Explicación del programa
    3. Pruebas y resultados
    4. Conclusiones y mejoras
 
## **📊 RÚBRICAS DE EVALUACIÓN**

### **Niveles de Dominio**

| Nivel | Puntuación | Descripción |
|-------|------------|-------------|
| **Excelente** 🏆 | 95 - 100 | Supera expectativas, implementación profesional |
| **Satisfactorio** ✅ | 85 - 94 | Cumple todos los requisitos, buena implementación |
| **En Desarrollo** 📈 | 75 - 84 | Cumple requisitos mínimos, necesita mejoras |
| **No Satisfactorio** ❌ | 0 - 74 | No cumple requisitos esenciales |

---

### **📋 Rúbrica de Evaluación por Criterios**

#### **1. Control de LEDs RGB** (20 puntos)

| Criterio | Excelente 🏆 | Satisfactorio ✅ | En Desarrollo 📈 | No Satisfactorio ❌ |
|----------|--------------|------------------|-------------------|---------------------|
| **Control Local** | Todos los botones funcionan perfectamente con respuesta inmediata | Botones funcionan con respuesta aceptable (<1s) | Algunos botones no responden consistentemente | Botones no funcionan o sistema no responde |
| **Control IoT Cloud** | Control remoto fluido, sin delays, interfaz intuitiva | Control remoto funciona con delays menores a 2s | Control remoto intermitente o con delays largos | Control IoT no funciona o no implementado |
| **Sincronización** | Sincronización bidireccional inmediata y perfecta | Sincronización funciona pero con delays menores a 2s | Sincronización solo en una dirección o inconsistente | No hay sincronización entre local/remoto |
| **Feedback Visual** | Feedback en OLED y LEDs claro e inmediato | Feedback presente pero básico, algo de delay | Feedback incompleto o confuso | Sin feedback visual o incorrecto |

#### **2. Sistema de Temperatura y Relevador** (20 puntos)

| Criterio | Excelente 🏆 | Satisfactorio ✅ | En Desarrollo 📈 | No Satisfactorio ❌ |
|----------|--------------|------------------|-------------------|---------------------|
| **Lectura Temperatura** | Precisión ±0.5°C, muestreo estable cada 1s | Precisión ±1°C, lecturas estables | Lecturas inestables o con error >2°C | No lee temperatura o errores graves |
| **Control Automático** | Umbral funciona perfectamente, sin falsos positivos | Umbral funciona con ocasional falso positivo | Umbral funciona intermitentemente | Control automático no funciona |
| **Control Manual IoT** | Control remoto inmediato y confiable | Control remoto funciona con delays aceptables | Control remoto inconsistente | Control manual IoT no implementado |
| **Seguridad Foco 100W** | Instalación segura, protecciones implementadas, cableado profesional | Instalación segura pero sin protecciones extra | Instalación básica, medidas de seguridad mínimas | Instalación insegura o no funciona |

#### **3. Detección de Movimiento y Gestos** (20 puntos)

| Criterio | Excelente 🏆 | Satisfactorio ✅ | En Desarrollo 📈 | No Satisfactorio ❌ |
|----------|--------------|------------------|-------------------|---------------------|
| **Detección Movimiento** | Detecta movimiento vertical/horizontal confiablemente, sin falsos positivos | Detecta movimiento pero con ocasional falso positivo | Detección intermitente o muchos falsos positivos | No detecta movimiento o siempre en falso |
| **Detección Gestos** | Gestos UP detectados consistentemente con movimiento natural | Gestos detectados pero requiere movimiento exagerado | Gestos detectados inconsistentemente | Gestos no detectados |
| **Notificaciones** | Notificaciones locales y remotas inmediatas en ambos sistemas | Notificaciones funcionan con delays menores a 2s | Notificaciones solo locales o incompletas | Sin notificaciones |
| **Temporización** | Temporizadores precisos de 1 segundo (±0.1s) | Temporizadores dentro de ±0.2s del tiempo requerido | Temporizadores imprecisos (±0.5s o más) | Temporizadores no funcionan |

#### **4. Interfaz OLED** (15 puntos)

| Criterio | Excelente 🏆 | Satisfactorio ✅ | En Desarrollo 📈 | No Satisfactorio ❌ |
|----------|--------------|------------------|-------------------|---------------------|
| **Información Mostrada** | Todos los estados mostrados claramente, formato profesional | Todos los estados mostrados, formato funcional | Estados incompletos o información confusa | Información esencial faltante |
| **Actualización** | Actualización en tiempo real, sin parpadeos, fluida | Actualización estable con delays mínimos | Actualización con parpadeos o delays notables | No se actualiza o actualización muy lenta |
| **Diseño Visual** | Diseño profesional, organizado, uso efectivo del espacio | Diseño funcional pero básico, organización aceptable | Diseño desorganizado, uso ineficiente del espacio | Diseño caótico o sin estructura |
| **Legibilidad** | Texto claro, bien estructurado, fácil de leer | Texto legible pero diseño simple | Texto difícil de leer en partes | Texto ilegible o mal formateado |

#### **5. Integración IoT Cloud** (15 puntos)

| Criterio | Excelente 🏆 | Satisfactorio ✅ | En Desarrollo 📈 | No Satisfactorio ❌ |
|----------|--------------|------------------|-------------------|---------------------|
| **Conexión** | Conexión estable y rápida, reconexión automática | Conexión estable con reconexión automática | Conexión intermitente o lenta | Sin conexión o no implementada |
| **Dashboard** | Dashboard completo, intuitivo y bien organizado | Dashboard funcional con todos los elementos | Dashboard incompleto o desorganizado | Dashboard no funcional o no creado |
| **Sincronización** | Sincronización perfecta local/remoto, estados consistentes | Sincronización con delays aceptables (<3s) | Sincronización inconsistente o unidireccional | Sin sincronización |
| **Confiabilidad** | Sistema 100% confiable, sin desconexiones | Sistema confiable con fallos menores ocasionales | Sistema con fallos frecuentes o inestable | Sistema no funcional |

#### **6. Calidad de Código y Documentación** (10 puntos)

| Criterio | Excelente 🏆 | Satisfactorio ✅ | En Desarrollo 📈 | No Satisfactorio ❌ |
|----------|--------------|------------------|-------------------|---------------------|
| **Estructura Código** | Código modular, bien estructurado, funciones optimizadas | Código organizado y funcional, buena lógica | Código funciona pero desorganizado | Código desorganizado o no funcional |
| **Comentarios** | Comentarios claros, útiles y en todas las secciones importantes | Comentarios adecuados en funciones principales | Comentarios mínimos o confusos | Sin comentarios o comentarios incorrectos |
| **Documentación** | Documentación completa, profesional, con diagramas | Documentación completa con explicaciones | Documentación incompleta o confusa | Sin documentación |
| **Originalidad** | Soluciones creativas, optimizadas y bien implementadas | Implementación estándar pero correcta y funcional | Implementación con problemas de diseño | Código copiado sin comprensión |

### **7. Competencia Técnica Individual** (10 puntos)









---

### **📝 Hoja de Calificación**

#### **Calificación por Categoría**

| Categoría | Puntos Máximos | Puntos Obtenidos | Nivel | Comentarios |
|-----------|----------------|------------------|-------|-------------|
| **Control de LEDs RGB** | 20 | | | |
| **Sistema Temperatura y Relevador** | 20 | | | |
| **Detección Movimiento y Gestos** | 20 | | | |
| **Interfaz OLED** | 15 | | | |
| **Integración IoT Cloud** | 15 | | | |
| **Calidad de Código y Documentación** | 10 | | | |
| **Total** | **100** | | | |


 

