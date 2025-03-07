# Guía de Estudio para el Examen Final de Sistemas Lógicos de Control 📚✨

Esta guía de estudio está diseñada para ayudarte a prepararte para el examen final de la clase **Sistemas Lógicos de Control**. Utiliza los documentos proporcionados (Quizzes 1-4 y la presentación de clase) para repasar los conceptos clave y practicar con ejercicios similares a los que podrías encontrar en el examen. ¡Vamos a ello! 💪

---

### **1. Sistemas Numéricos y Conversiones** 🔢

#### **Conceptos Clave:**
- **Sistema Decimal (Base 10):** Utiliza los dígitos del 0 al 9. Es el sistema más común en la vida cotidiana. 🛒
- **Sistema Binario (Base 2):** Utiliza solo dos dígitos: 0 y 1. Es la base de los sistemas digitales. 💻
- **Sistema Octal (Base 8):** Utiliza los dígitos del 0 al 7. 🎱
- **Sistema Hexadecimal (Base 16):** Utiliza los dígitos del 0 al 9 y las letras A-F para representar valores del 10 al 15. 🔠

#### **Conversiones entre Sistemas:**
- **Decimal a Binario:** Divide el número decimal entre 2 y toma los residuos en orden inverso. 🔄
- **Binario a Decimal:** Multiplica cada bit por 2 elevado a la posición correspondiente y suma los resultados. ➕
- **Decimal a Octal:** Divide el número decimal entre 8 y toma los residuos en orden inverso. 🔄
- **Octal a Decimal:** Multiplica cada dígito por 8 elevado a la posición correspondiente y suma los resultados. ➕
- **Decimal a Hexadecimal:** Divide el número decimal entre 16 y toma los residuos en orden inverso. 🔄
- **Hexadecimal a Decimal:** Multiplica cada dígito por 16 elevado a la posición correspondiente y suma los resultados. ➕

#### **Ejercicios de Práctica:**
1. Convierte el número decimal **25** a binario. 🧮
2. Convierte el número binario **1010** a decimal. 🧮
3. Convierte el número decimal **255** a hexadecimal. 🧮
4. Convierte el número octal **777** a decimal. 🧮

---

### **2. Álgebra Booleana** 🧠

#### **Conceptos Clave:**
- **Álgebra Booleana:** Es un marco matemático para realizar operaciones lógicas y analizar sistemas binarios. 🔍
- **Leyes Básicas:**
  - **Ley de Identidad:** $\( A \bullet 1 = A \)$ y $\( A + 0 = A \)$. 🆔
  - **Ley de Complemento:** $\( A + \overline{A} = 1 \$) y $\( A \bullet \overline{A} = 0 \)$. 🔄
  - **Ley Distributiva:** $\( A \bullet (B + C) = (A \bullet B) + (A \bullet C) \)$. ➗
  - **Ley de Morgan:** $\( \overline{A + B} = \overline{A} \bullet \overline{B} \)$ y $\( \overline{A \bullet B} = \overline{A} + \overline{B} \)$. 🧙‍♂️

#### **Simplificación de Expresiones Booleanas:**
- **Propósito:** Reducir el costo, el consumo de energía y las redundancias en el circuito. 💡
- **Herramientas:** Tablas de verdad, mapas de Karnaugh y leyes booleanas. 🛠️

#### **Ejercicios de Práctica:**
1. Simplifica la expresión booleana $\( Y = A \bullet B + \overline{C} \)$. 🧮
2. Demuestra la propiedad distributiva utilizando tablas de verdad. 📊
3. Simplifica la expresión $\( Y = A \bullet (B + \overline{A}) \)$. 🧮

---

### **3. Compuertas Lógicas** ⚡

#### **Conceptos Clave:**
- **Compuertas Lógicas Básicas:**
  - **AND:** La salida es 1 si todas las entradas son 1. 🔗
  - **OR:** La salida es 1 si al menos una entrada es 1. 🔌
  - **NOT:** Invierte la entrada (1 → 0, 0 → 1). 🔄
  - **XOR:** La salida es 1 si las entradas son diferentes. 🔀
  - **NAND:** Es una combinación de NOT y AND. 🚫🔗
  - **NOR:** Es una combinación de NOT y OR. 🚫🔌

#### **Tablas de Verdad:**
- **Propósito:** Determinar las combinaciones de entradas que producen una salida específica. 📊
- **Ejemplo:** Para una compuerta AND de dos entradas, la salida es 1 solo si ambas entradas son 1. 🔗

#### **Ejercicios de Práctica:**
1. Dibuja la tabla de verdad para una compuerta XOR de dos entradas. 📊
2. Implementa la expresión $\( Y = A \bullet B + \overline{C} \)$ utilizando compuertas lógicas. 🛠️
3. ¿Qué compuerta lógica se necesita para implementar la expresión $$\( Y = \overline{A + B} \)$$? 🤔
4. Ecuacion: $$ \overline{A + B} $$

---

### **4. Circuitos Lógicos** 🔧

#### **Conceptos Clave:**
- **Circuito Lógico:** Es un sistema que procesa señales binarias utilizando compuertas lógicas. 💻
- **Componentes Físicos:** Circuitos integrados (IC), resistencias, LEDs, etc. 🔌
- **Voltaje de Alimentación:** Los circuitos integrados de la serie 7400 suelen requerir 5V. ⚡

#### **Implementación de Circuitos:**
- **Resistencias en Circuitos con LEDs:** Limitan la corriente para evitar que el LED se queme. 💡
- **Validación de Circuitos:** Se realiza comparando los resultados de las salidas con la tabla de verdad. 📊

#### **Ejercicios de Práctica:**
1. Diseña un circuito que implemente la expresión $\( Y = A \bullet B + \overline{C} \)$. 🛠️
2. ¿Qué sucede si no se conecta correctamente el pin GND de un circuito integrado? 🤔
3. ¿Qué pasa si se conecta un LED sin una resistencia en el circuito? 💡

---

### **5. Mapas de Karnaugh** 🗺️

#### **Conceptos Clave:**
- **Mapas de Karnaugh:** Es una herramienta para simplificar funciones booleanas. 🧩
- **Propósito:** Reducir el número de compuertas lógicas en un circuito. 🛠️

#### **Ejercicios de Práctica:**
1. Simplifica la siguiente función utilizando un mapa de Karnaugh:
   $'\[
   F(A, B, C) = \sum (0, 1, 2, 4, 5, 6)
   \]'$
2. Obtén la tabla de verdad y simplifica la función $\( F(x, y, z) \)$ utilizando un mapa de Karnaugh. 📊

---

### **6. Ejercicios Integrados** 🧩

#### **Problemas Complejos:**
1. Diseña un circuito de control para una alarma que se active cuando al menos tres de cuatro detectores estén activados. Si solo dos detectores están activados, la alarma puede activarse o no. La alarma nunca debe activarse si solo un detector o ninguno está activado. 🚨
2. Simplifica la expresión booleana $\( Y = A \bullet B + \overline{A} \bullet C + A \bullet \overline{B} \)$ utilizando mapas de Karnaugh. 🧮

---

### **Consejos para el Examen:**
- **Repasa las Tablas de Verdad:** Asegúrate de entender cómo funcionan las compuertas lógicas y cómo se relacionan con las expresiones booleanas. 📊
- **Practica Conversiones:** Realiza varias conversiones entre sistemas numéricos para familiarizarte con los procesos. 🔢
- **Simplifica Expresiones Booleanas:** Utiliza las leyes booleanas y los mapas de Karnaugh para simplificar expresiones complejas. 🧠
- **Diseña Circuitos:** Practica la implementación de circuitos lógicos a partir de expresiones booleanas. 🛠️

---

### **Recursos Adicionales:**
- **Presentación de Clase:** Revisa las diapositivas de la presentación para repasar los conceptos clave y los ejemplos proporcionados. 📑
- **Quizzes 1-4:** Utiliza los quizzes como ejercicios de práctica adicional. Resuelve las preguntas y verifica tus respuestas. 📝

---

¡Buena suerte en tu examen final! 🍀 Si tienes alguna duda, no dudes en consultar con tu profesor o compañeros de clase. ¡Tú puedes! 💪✨
