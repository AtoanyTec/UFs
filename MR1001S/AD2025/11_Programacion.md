# 11. Programación en MATLAB

## 🎯 Objetivo
Aprender los fundamentos de la programación en MATLAB, incluyendo estructuras de control de flujo y creación de funciones personalizadas para automatizar tareas y resolver problemas complejos.

## 11.1 🏗️ Programas para Tareas Específicas
En MATLAB, los programas se crean como scripts (archivos .m) que ejecutan una secuencia de comandos para cumplir una tarea específica.

### Estructura Básica de un Script:
```matlab
% MI_PRIMER_SCRIPT.M
% Este es un script que calcula áreas de figuras geométricas

% 1. Definir variables
radio = 5;
base = 10;
altura = 8;

% 2. Realizar cálculos
area_circulo = pi * radio^2;
area_triangulo = 0.5 * base * altura;

% 3. Mostrar resultados
fprintf('Área del círculo: %.2f\n', area_circulo);
fprintf('Área del triángulo: %.2f\n', area_triangulo);
```

### Buenas Prácticas:
* Usa comentarios para explicar tu código
* Usa nombres descriptivos para variables
* Organiza tu código en secciones lógicas
* Prueba tu código con diferentes entradas

## 11.2 🤔 Condicionales
Las estructuras condicionales permiten ejecutar código basado en condiciones lógicas.

### If-Else Básico:
```matlab
% Verificar si un número es positivo, negativo o cero
numero = input('Ingrese un número: ');

if numero > 0
    disp('El número es positivo');
elseif numero < 0
    disp('El número es negativo');
else
    disp('El número es cero');
end
```

### Condicionales con Múltiples Condiciones:
```matlab
% Determinar si un año es bisiesto
anio = input('Ingrese un año: ');

if (mod(anio, 4) == 0 && mod(anio, 100) ~= 0) || mod(anio, 400) == 0
    fprintf('%d es un año bisiesto\n', anio);
else
    fprintf('%d no es un año bisiesto\n', anio);
end
```

### Estructura Switch-Case:
```matlab
% Menú de opciones simples
opcion = input('Seleccione opción (1-3): ');

switch opcion
    case 1
        disp('Ejecutando opción 1');
        % Código para opción 1
    case 2
        disp('Ejecutando opción 2');
        % Código para opción 2
    case 3
        disp('Ejecutando opción 3');
        % Código para opción 3
    otherwise
        disp('Opción no válida');
end
```

## 12.3 🔄 Ciclos
Los ciclos permiten repetir código múltiples veces.

### Ciclo For:
```matlab
% Calcular factorial de un número
n = input('Ingrese un número: ');
factorial = 1;

for i = 1:n
    factorial = factorial * i;
end

fprintf('El factorial de %d es %d\n', n, factorial);
```

### Ciclo For con Vectores:
```matlab
% Recorrer elementos de un vector
calificaciones = [85, 92, 78, 90, 88];

for i = 1:length(calificaciones)
    fprintf('Calificación %d: %d\n', i, calificaciones(i));
    
    if calificaciones(i) >= 90
        disp('¡Excelente!');
    end
end
```

### Ciclo While:
```matlab
% Adivinar un número hasta acertar
numero_secreto = randi([1, 100]);
intento = 0;
intentos = 0;

while intento ~= numero_secreto
    intento = input('Adivina el número (1-100): ');
    intentos = intentos + 1;
    
    if intento < numero_secreto
        disp('Demasiado bajo');
    elseif intento > numero_secreto
        disp('Demasiado alto');
    else
        fprintf('¡Correcto! Lo adivinaste en %d intentos\n', intentos);
    end
end
```


### Control de Ciclos:
```matlab
% Usar break y continue
for i = 1:100
    if i == 50
        continue; % Salta esta iteración
    end
    
    if i > 75
        break;    % Termina el ciclo
    end
    
    disp(i);
end
```

## 12.4 🧩 Funciones Definidas por el Usuario
Las funciones permiten encapsular código reusable con entradas y salidas definidas.

### Estructura de una Función:
```matlab
% ARCHIVO: calcular_promedio.m
function [promedio, maximo, minimo] = calcular_promedio(datos)
    % CALCULAR_PROMEDIO Calcula estadísticas de un conjunto de datos
    %   [PROMEDIO, MAXIMO, MINIMO] = CALCULAR_PROMEDIO(DATOS)
    
    promedio = mean(datos);
    maximo = max(datos);
    minimo = min(datos);
end
```

### Uso de la Función:
```matlab
>> datos = [85, 92, 78, 90, 88];
>> [prom, max, min] = calcular_promedio(datos);
>> fprintf('Promedio: %.2f, Máximo: %d, Mínimo: %d\n', prom, max, min);
```

### Función con Validación de Entrada:
```matlab
% ARCHIVO: es_primo.m
function resultado = es_primo(n)
    % ES_PRIMO Determina si un número es primo
    
    if n <= 1 || ~isnumeric(n) || rem(n, 1) ~= 0
        error('El input debe ser un número entero mayor que 1');
    end
    
    resultado = true;
    
    for i = 2:sqrt(n)
        if mod(n, i) == 0
            resultado = false;
            break;
        end
    end
end
```

### Función con Argumentos Opcionales:
```matlab
% ARCHIVO: calcular_interes.m
function monto_final = calcular_interes(principal, tasa, tiempo, varargin)
    % CALCULAR_INTERES Calcula interés simple o compuesto
    
    p = inputParser;
    addRequired(p, 'principal');
    addRequired(p, 'tasa');
    addRequired(p, 'tiempo');
    addOptional(p, 'tipo', 'compuesto', @ischar);
    
    parse(p, principal, tasa, tiempo, varargin{:});
    
    if strcmpi(p.Results.tipo, 'simple')
        monto_final = principal * (1 + tasa * tiempo);
    else
        monto_final = principal * (1 + tasa)^tiempo;
    end
end
```

## 💡 Aplicación Integrada:
```matlab
% ARCHIVO: analizar_datos.m
function [estadisticas, datos_filtrados] = analizar_datos(datos, umbral)
    % ANALIZAR_DATOS Analiza y filtra un conjunto de datos
    
    % Calcular estadísticas básicas
    estadisticas.media = mean(datos);
    estadisticas.mediana = median(datos);
    estadisticas.desviacion = std(datos);
    
    % Filtrar datos
    datos_filtrados = datos(datos > umbral);
    
    % Crear gráfica
    figure;
    subplot(1, 2, 1);
    histogram(datos);
    title('Datos Originales');
    
    subplot(1, 2, 2);
    histogram(datos_filtrados);
    title('Datos Filtrados');
end
```

## ✨ Consejos Avanzados:
### Usa ```tic``` y ```toc``` para medir tiempo de ejecución:
```matlab
tic;
% Código a medir
tiempo = toc;
fprintf('Tiempo de ejecución: %.4f segundos\n', tiempo);
```

### Depura tu código con puntos de interrupción (breakpoints):
* Haz clic en la línea donde quieres pausar la ejecución
* Usa F10 para paso a paso y F11 para entrar en funciones

### Optimiza ciclos pre-asignando memoria:
```matlab
% ❌ Ineficiente
for i = 1:10000
    resultado(i) = i^2; % Se redimensiona en cada iteración
end

% ✅ Eficiente
resultado = zeros(1, 10000);
for i = 1:10000
    resultado(i) = i^2;
end
```

---

🔧 Con estas herramientas de programación, puedes crear aplicaciones complejas en MATLAB, automatizar tareas repetitivas y resolver problemas de manera eficiente y estructurada.



















