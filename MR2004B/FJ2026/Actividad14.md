# 📈 Ejercicio: Diseño de un transistor P2N2222A en región activa

## 🎯 Objetivo

Diseñar un circuito con un transistor **P2N2222A** en configuración de emisor común para que opere en la **región activa**.

## 📋 Datos

- 🔋 $\(V_{CC}=12V\)$
- 🔋 $\(V_{BB}=5V\)$
- 🔧 Transistor: P2N2222A
- ⚡ $\(V_{BE(on)}=0.7V\)$
- 📊 $\(\beta_{DC}=100\)$

## 📝 Actividades

### 1️⃣ Dibuje el circuito

Incluya los siguientes elementos:

- 🔹 Una resistencia $\(R_C\)$ conectada entre $\(V_{CC}\)$ y el colector.
- 🔹 Una resistencia $\(R_B\)$ conectada entre $\(V_{BB}\)$ y la base.
- 🔹 El emisor conectado a tierra (GND).

<img width="436" height="283" alt="image" src="https://github.com/user-attachments/assets/12c0fd41-09b7-4909-aa00-01f72eb93442" />


### 2️⃣ Diseñe el punto de operación

Para que el transistor opere en la región activa, ubique el punto Q aproximadamente en el centro de la recta de carga.

Utilice:

$\[
V_{CEQ}\approx \frac{V_{CC}}{2}
\]$

### 3️⃣ Calcule el valor de $\(R_C\)$

Considere una corriente de colector de:

$\[
I_C=10mA
\]$

Determine el valor de $\(R_C\)$ necesario para obtener el punto de operación deseado.

### 4️⃣ Calcule la corriente de base

Utilice la relación:

$\[
I_B=\frac{I_C}{\beta_{DC}}
\]$

### 5️⃣ Calcule el valor de \(R_B\)

Utilice:

$\[
R_B=\frac{V_{BB}-V_{BE}}{I_B}
\]$

### 6️⃣ Verifique la corriente de colector

Calcule:

$\[
I_C=\beta_{DC}I_B
\]$

### 7️⃣ Calcule el voltaje colector-emisor

Determine:

$\[
V_{CE}=V_{CC}-I_CR_C
\]$


### 8️⃣ Justifique su respuesta

Explique por qué el transistor se encuentra en la región activa utilizando los valores obtenidos de:

- $\(I_B\)$
- $\(I_C\)$
- $\(V_{CE}\)$

## 📦 Entregables

✅ Circuito esquemático.    

✅ Simulación en proteus donde se visualice la medicón de $\(I_B\)$, e $\(I_C\)$.

✅ Cálculo de $\(R_B\)$ y $\(R_C\)$.

✅ Cálculo de $\(I_B\)$, $\(I_C\)$ y $\(V_{CE}\)$.

✅ Conclusión indicando la región de operación del transistor.

