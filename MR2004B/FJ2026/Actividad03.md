# Actividad 3: Cuenta regresiva en display de 7 segmentos ⏱️🔢

## 🎯 Objetivo

Programar el simulador de microcontrolador de 4 bits para visualizar una **cuenta regresiva en segundos del 5 al 0**, utilizando los **puertos A y B** para controlar un **display de 7 segmentos**.

---

## 📝 Instrucciones para los estudiantes

En esta actividad deberás desarrollar un programa en el simulador de microcontrolador de 4 bits que muestre una cuenta regresiva desde el número **5 hasta el 0** en un display de **7 segmentos**. Programar un bucle con alguna de las instrucciones de **Salto**.

Para ello, deberás utilizar los **puertos A y B** del microcontrolador para conectar y controlar los segmentos del display.

El programa deberá mostrar los números en el siguiente orden:

```text
5 → 4 → 3 → 2 → 1 → 0
```
Cada número deberá permanecer visible aproximadamente 1 segundo antes de cambiar al siguiente.

## 🧠 Explicación requerida

En el video deberás explicar:

- Cómo está conectado el display de 7 segmentos a los puertos A y B.
- Qué segmentos se encienden para formar cada número.
- Qué hace cada línea del código.
- Cómo se cargan los valores en los registros ACC, RD.
- Cómo se envían los datos a los puertos de salida OUTA y OUTB.
- Cómo se genera el retardo entre cada número.
- Cómo se relaciona el funcionamiento del programa con el diagrama de arquitectura del microcontrolador.

## 💡 Entregables

Deberás entregar los siguientes archivos:

1. 📚 Código fuente
  - Archivo en formato Excel.
2. 💾 Archivo binario
  - Archivo generado o editado en HxD.
3. 🧪 Simulación en Proteus
  - Circuito funcional con el microcontrolador de 4 bits.
4. 🎥 Video explicativo
  - Explicar línea por línea el código.
  - Mostrar la simulación funcionando.
  - Relacionar el programa con el diagrama de arquitectura del microcontrolador.

## ✅ Criterios de evaluación

| Criterio | Excelente (100-90) | Bueno (89-80) | Suficiente (79-70) | Insuficiente (<70) | Ponderación |
|---|---|---|---|---|---|
| Funcionamiento de la cuenta regresiva | La cuenta regresiva del 5 al 0 funciona correctamente y con tiempos adecuados. | La secuencia funciona con pequeños errores de tiempo o visualización. | La secuencia funciona parcialmente o presenta varios errores. | La cuenta regresiva no funciona correctamente. | 25% |
| Uso de puertos A y B | Los puertos A y B están correctamente configurados y conectados al display de 7 segmentos. | Existe un pequeño error en configuración o conexión. | El uso de puertos presenta varios errores funcionales. | Los puertos están mal utilizados o no funcionan. | 15% |
| Código fuente | El código está completo, ordenado, documentado y es fácil de entender. | El código funciona y tiene documentación parcial. | El código tiene poca documentación o problemas de organización. | El código está incompleto o desordenado. | 20% |
| Archivo binario (HxD) | El archivo binario corresponde perfectamente al programa desarrollado. | Presenta pequeños errores menores. | El archivo tiene inconsistencias importantes. | El archivo es incorrecto o no funciona. | 10% |
| Simulación en Proteus | La simulación funciona correctamente y demuestra el comportamiento esperado. | La simulación funciona con pequeños detalles incorrectos. | La simulación funciona parcialmente. | La simulación no funciona. | 15% |
| Video explicativo | Explica claramente línea por línea el código y la arquitectura del microcontrolador. | La explicación es clara pero incompleta en algunos puntos. | La explicación es limitada o poco clara. | No explica correctamente el funcionamiento. | 15% |

