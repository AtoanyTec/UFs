# 8. Gráficas en MATLAB

## 🎯 Objetivo
Aprender a crear, personalizar y annotar gráficas 2D y 3D en MATLAB para visualizar datos de manera efectiva.

## 9.1 👁️ Visualizar Variables con Funciones de Graficación
MATLAB ofrece diversas funciones para visualizar datos. Las más comunes son ```plot``` para gráficas 2D y ```plot3```, ```surf``` para gráficas 3D.

```matlab
% Crear datos de ejemplo
x = 0:0.1:2*pi;
y = sin(x);

% Gráfica básica
figure;       % Crear una nueva ventana de figura
plot(x, y);   % Crear gráfica de línea
title('Función Seno'); % Agregar título
```

## 9.2 📈 Graficar Vectores
Puedes graficar vectores contra otros vectores o contra índices.

### Gráfica de Línea:
```matlab
>> x = linspace(0, 10, 100);
>> y = exp(-x/5) .* sin(x);
>> plot(x, y);
```

### Gráfica de Dispersión:
```matlab
>> x = randn(100, 1);
>> y = randn(100, 1);
>> scatter(x, y);
```

### Gráfica de Barras:
```matlab
>> datos = [15, 23, 18, 30, 12];
>> bar(datos);
```

### Múltiples Gráficas en una Figura:
```matlab
>> t = 0:0.01:2;
>> y1 = sin(2*pi*t);
>> y2 = cos(2*pi*t);
>> plot(t, y1, t, y2);
```

## 9.3 🎨 Editar Estilo de la Gráfica
Puedes personalizar el aspecto de tus gráficas con diferentes colores, estilos de línea y marcadores.

### Colores y Estilos de Línea:
```matlab
>> x = 0:0.1:10;
>> y = sin(x);
>> plot(x, y, 'r--', 'LineWidth', 2); % Línea roja discontinua, gruesa

% Opciones de color: 'r' (red), 'b' (blue), 'g' (green), 'k' (black), etc.
% Opciones de línea: '-' (sólida), '--' (discontinua), ':' (punteada)
% Opciones de marcador: 'o' (círculo), '*' (estrella), '.' (punto)
```

### Personalización Avanzada:
```matlab
>> x = 0:0.1:10;
>> y1 = sin(x);
>> y2 = cos(x);
>> 
>> plot(x, y1, 'b-', 'LineWidth', 2); % Línea azul sólida
>> hold on; % Mantener la gráfica actual para agregar más
>> plot(x, y2, 'ro', 'MarkerSize', 4); % Puntos rojos
>> hold off;
```

## 9.4 🏷️ Incluir Leyendas, Ejes y Anotaciones
### Leyendas y Etiquetas:
```matlab
>> x = 0:0.1:2*pi;
>> y1 = sin(x);
>> y2 = cos(x);
>> 
>> plot(x, y1, 'b-', x, y2, 'r--');
>> legend('Seno', 'Coseno'); % Agrega leyenda
>> xlabel('Ángulo (radianes)'); % Etiqueta eje X
>> ylabel('Valor'); % Etiqueta eje Y
>> title('Funciones Trigonométricas'); % Título
>> grid on; % Activar cuadrícula
```

### Límites de Ejes:
```matlab
>> xlim([0, 2*pi]); % Establecer límites del eje X
>> ylim([-1.5, 1.5]); % Establecer límites del eje Y
```

### Anotaciones de Texto:
```matlab
>> text(pi/2, 1, 'Máximo del seno', 'FontSize', 12); % Texto en coordenadas específicas
>> annotation('textarrow', [0.3,0.5], [0.6,0.4], 'String', 'Punto importante'); % Flecha con texto
```

## 9.5 🌐 Gráficas 3D
### Gráficas de Línea 3D:
```matlab
>> t = 0:pi/50:10*pi;
>> x = sin(t);
>> y = cos(t);
>> z = t;
>> 
>> figure;
>> plot3(x, y, z);
>> grid on;
>> xlabel('X');
>> ylabel('Y');
>> zlabel('Z');
>> title('Hélice en 3D');
```

### Gráficas de Superficie:
```matlab
>> [X, Y] = meshgrid(-2:0.1:2, -2:0.1:2);
>> Z = X .* exp(-X.^2 - Y.^2);
>> 
>> figure;
>> surf(X, Y, Z);
>> colormap jet; % Cambiar mapa de colores
>> colorbar; % Agregar barra de colores
>> xlabel('X');
>> ylabel('Y');
>> zlabel('Z');
>> title('Superficie 3D');
```

### Gráficas de Malla:
```matlab
>> figure;
>> mesh(X, Y, Z); % Similar a surf pero con malla
>> title('Malla 3D');
```

### Curvas de Nivel:
```matlab
>> figure;
>> contour(X, Y, Z, 20); % 20 líneas de contorno
>> colorbar;
>> title('Curvas de Nivel');
```

## 💡 Consejos y Mejores Prácticas:
1. Siempre usa ```figure``` antes de crear una nueva gráfica para evitar sobrescribir gráficas existentes.
2. Usa ```hold on``` y ```hold off``` para superponer múltiples gráficas en los mismos ejes.
3. Personaliza tus gráficas para hacerlas más claras y profesionales:
```matlab
set(gca, 'FontSize', 12); % Cambiar tamaño de fuente de los ejes
set(gcf, 'Color', 'w');   % Cambiar color de fondo de la figura a blanco
``` 
4. Exporta tus gráficas para usarlas en documentos:
```matlab
saveas(gcf, 'mi_grafica.png'); % Guardar como PNG
print('mi_grafica', '-dpdf');  % Guardar como PDF
```
5. Experimenta con diferentes tipos de gráficas según tus datos:
```matlab
% Para datos categóricos
pie([30, 20, 50], {'Categoria A', 'Categoria B', 'Categoria C'});

% Para datos estadísticos
histogram(randn(1000,1), 20); % Histograma con 20 bins
```

## 🚀 Ejemplo Integrador:
```matlab
% Crear datos
t = linspace(0, 10, 100);
y1 = exp(-t/3) .* sin(2*t);
y2 = exp(-t/5) .* cos(t);

% Crear figura con 2 subgráficas
figure('Position', [100, 100, 1200, 500]); % [left, bottom, width, height]

% Subgráfica 1: Gráfica 2D
subplot(1, 2, 1);
plot(t, y1, 'b-', 'LineWidth', 2);
hold on;
plot(t, y2, 'r--', 'LineWidth', 2);
hold off;
xlabel('Tiempo (s)');
ylabel('Amplitud');
title('Señales en el Tiempo');
legend('Señal 1', 'Señal 2');
grid on;

% Subgráfica 2: Gráfica 3D
subplot(1, 2, 2);
[X, Y] = meshgrid(-3:0.1:3);
Z = sin(X) .* cos(Y);
surf(X, Y, Z);
shading interp; % Suavizado de colores
xlabel('X');
ylabel('Y');
zlabel('Z');
title('Superficie 3D');
colorbar;

% Guardar figura
saveas(gcf, 'graficas_combinadas.png');
```

---

✨ Con estas herramientas, puedes crear visualizaciones profesionales y efectivas para analizar y comunicar tus datos de manera clara y compelling.















