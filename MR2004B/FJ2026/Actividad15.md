# 🔛 Ejercicio: Diseño de un transistor P2N2222A en saturación

## 🎯 Objetivo

Diseñar un circuito con un transistor **P2N2222A** en configuración de emisor común para que opere en la **región de saturación**.

## 📋 Datos

- 🔋 $\(V_{CC}=12V\)$
- 🔋 $\(V_{BB}=5V\)$
- 🔧 Transistor: P2N2222A
- ⚡ $\(V_{BE(sat)}=0.7V\)$
- ⚡ $\(V_{CE(sat)}=0.2V\)$
- 📊 $\(\beta_{forzado}=10\)$
- 💡 Corriente deseada de colector: $\(I_C=20mA\)$

## 📝 Actividades

### 1️⃣ Dibuje el circuito

Incluya:

- 🔹 Una resistencia $\(R_C\)$ conectada entre $\(V_{CC}\)$ y el colector.
- 🔹 Una resistencia $\(R_B\)$ conectada entre $\(V_{BB}\)$ y la base.
- 🔹 El emisor conectado a tierra (GND).

### 2️⃣ Calcule el valor de $\(R_C\)$

Utilice:

$\[
R_C=\frac{V_{CC}-V_{CE(sat)}}{I_C}
\]$

### 3️⃣ Calcule la corriente de base necesaria

Use la beta forzada:

$\[
I_B=\frac{I_C}{\beta_{forzado}}
\]$

### 4️⃣ Calcule el valor de \(R_B\)

Utilice:

$\[
R_B=\frac{V_{BB}-V_{BE(sat)}}{I_B}
\]$

### 5️⃣ Verifique la corriente de colector en saturación

Calcule:

$\[
I_{C(sat)}=\frac{V_{CC}-V_{CE(sat)}}{R_C}
\]$

### 6️⃣ Verifique la corriente de base real

Calcule:

$\[
I_B=\frac{V_{BB}-V_{BE(sat)}}{R_B}
\]$

### 7️⃣ Compruebe la condición de saturación

Verifique que la corriente de base sea suficiente para saturar el transistor:

$\[
I_B \geq \frac{I_C}{\beta_{forzado}}
\]$


### 8️⃣ Justifique su respuesta

Explique por qué el transistor se encuentra en saturación utilizando los valores obtenidos de:

- $\(R_B\)$
- $\(R_C\)$
- $\(I_B\)$
- $\(I_C\)$
- $\(V_{CE}\)$

## 📦 Entregables

✅ Circuito esquemático.

✅ Simulación en proteus donde se muestre la medición de $\(V_{CE}\)$

✅ Cálculo de $\(R_B\)$ y $\(R_C\)$.

✅ Cálculo de $\(I_B\)$, $\(I_C\)$ e $\(I_{C(sat)}\)$.

✅ Verificación de la condición de saturación.

✅ Conclusión indicando la región de operación del transistor.

