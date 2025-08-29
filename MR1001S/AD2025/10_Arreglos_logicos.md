# 10. Arreglos Lógicos en MATLAB
## 🎯 Objetivo
Aprender a utilizar expresiones lógicas y indexación lógica para manipular y filtrar datos de manera eficiente en MATLAB.

## 11.1 🧠 Utilización de Expresiones Lógicas para Manipulación de Arreglos
Los arreglos lógicos son arrays que contienen únicamente valores ```true``` (1) o ```false``` (0). Son extremadamente útiles para filtrar y manipular datos basados en condiciones.

### Creación de Arreglos Lógicos:
```matlab
% A partir de comparaciones directas
>> vector = [5, 12, 8, 3, 15];
>> logico = vector > 10
logico =
  1×5 logical array
   0   1   0   0   1

% Combinando condiciones con operadores lógicos
>> condicion = (vector > 5) & (vector < 15)
condicion =
  1×5 logical array
   0   1   1   0   0
```

### Operadores Lógicos:
|  Operador  |  Descripción      |  Ejemplo  |
|------------|-------------------|-----------|
|```==```    |Igual a            |``À==B```  |
|```~=```    |No igual a         |``À~=B```  |
|```<```     |Menor que          |``À==B```  |
|```>```     |Mayor que          |``À==B```  |
|```<=```    |Menor o igual que  |``À==B```  |
|```>=```    |Mayor o igual que  |``À==B```  |
|```&```     |AND lógico         |``À==B```  |
|```|```     |OR lógico          |``À==B```  |
|```~```     |NOT lógico         |``À==B```  |

### Funciones Útiles para Arreglos Lógicos:
```matlab
>> any(vector > 10)  % Verifica si ALGÚN elemento cumple la condición
ans =
  logical
   1

>> all(vector > 2)   % Verifica si TODOS los elementos cumplen la condición
ans =
  logical
   1

>> find(vector > 10) % Encuentra los ÍNDICES de elementos que cumplen la condición
ans =
     2     5
```














