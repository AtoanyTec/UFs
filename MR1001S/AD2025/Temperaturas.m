% Cargar datos de temperatura mensual (ejemplo real)
temperaturas = [12.5, 14.2, 16.8, 19.3, 22.1, 25.6, 28.9, 28.5, 25.2, 20.8, 16.3, 13.1];
meses = 1:12;

% Gráfico básico
figure;
plot(meses, temperaturas, 'b-o', 'LineWidth', 2);
title('Temperatura Mensual Promedio');
xlabel('Mes');
ylabel('Temperatura (°C)');
grid on;

% Estadísticas básicas
temp_media = mean(temperaturas);
temp_max = max(temperaturas);
temp_min = min(temperaturas);

fprintf('Temperatura media anual: %.1f°C\n', temp_media);
fprintf('Temperatura máxima: %.1f°C\n', temp_max);
fprintf('Temperatura mínima: %.1f°C\n', temp_min);
