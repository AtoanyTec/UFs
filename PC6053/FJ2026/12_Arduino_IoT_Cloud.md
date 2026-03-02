# 🛰️ Actividad 12: Integración del Sensor PIR con Arduino IoT Cloud

## 🎯 Objetivo

Integrar el sistema de detección de presencia utilizando un **sensor PIR** a la plataforma **Arduino IoT Cloud**, logrando que el **Monitor Serial en la nube** muestre mensajes indicando si hay presencia de personas o no.

---

## 🧠 Competencias a desarrollar

- Configuración de dispositivos en la nube  
- Integración hardware–software  
- Comunicación serial en entornos IoT  
- Validación remota de sensores  

---

## 🛠️ Material necesario

- ESP32 o Arduino compatible con IoT Cloud  
- Sensor PIR  
- Protoboard  
- Cables al ras del protoboard (sin jumpers largos)  
- Conexión WiFi estable  
- Cuenta en Arduino IoT Cloud  

---

## 📌 Instrucciones

Consulta las [diapositivas](https://tecmx-my.sharepoint.com/:p:/g/personal/afierror_tec_mx/IQDKWWxvh_b_SpXE1LrKlTLZAYFYq15qf5NjE3mjn0t_lS4?e=1QZp8s) 61-82 para realizar la actividad

---

## 🧪 Parte 3: Validación del funcionamiento

1. Abrir el **Serial Monitor de Arduino IoT Cloud**.
2. Activar el sensor (moverse frente a él).
3. Verificar que:

   - Cuando detecta movimiento → aparezca mensaje de presencia.
   - Cuando no detecta movimiento → aparezca mensaje de ausencia.
   - La variable booleana cambie correctamente en la plataforma.

---

## 🎥 Entregables

### 📹 Video (máximo 2 minutos)

Debe incluir:

- Circuito físico funcionando.
- Monitor Serial en Arduino IoT Cloud mostrando los mensajes.
- Prueba con detección de presencia.
- Prueba sin detección.

### 📄 Código fuente comentado

Debe incluir:

- Lectura del sensor PIR.
- Mensajes impresos correctamente.

### 🧠 Explicación breve (en PDF o sección escrita)

Responder:

1. ¿Cómo se conecta un dispositivo a Arduino IoT Cloud?
3. ¿Qué ventajas tiene usar IoT Cloud frente al monitor serial local?
4. ¿Qué mejoras implementarías al sistema?

---

## 📊 Rúbrica de Evaluación

| Criterio | Excelente (100-95) | Bueno (94-85) | Suficiente (84-75) | Insuficiente (<75) |
|-----------|-------------------|---------------|--------------------|--------------------|
| Funcionamiento en la nube | Detecta presencia y actualiza correctamente en IoT Cloud en todo momento | Funciona con pequeños retrasos | Funciona parcialmente | No funciona |
| Integración IoT | Variable bien configurada y sincronizada | Variable funcional con detalles menores | Configuración incompleta | No conecta |
| Monitor Serial en la nube | Mensajes claros y correctos | Mensajes poco claros | Mensajes inconsistentes | No imprime |
| Presentación del circuito | Cableado limpio, sin jumpers largos | Funcional pero desordenado | Poco ordenado | Incorrecto |
| Explicación técnica | Respuestas claras y bien fundamentadas | Respuestas aceptables | Respuestas superficiales | No entrega |


---

Si el sistema funciona correctamente en la nube, significa que han dado el paso de **sistema embebido local → sistema IoT conectado**, que es exactamente hacia donde se dirige la industria 4.0 🌐
