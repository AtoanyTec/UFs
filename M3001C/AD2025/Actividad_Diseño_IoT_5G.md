# 🏭 Proyecto IoT 5G para Monitoreo en Fabricación de Máscaras

## 🎯 Objetivo
Diseñar un sistema IoT conectado a red 5G para monitorear **humedad** (💧) y **temperatura** (🌡️) en la línea de producción de máscaras, aplicando:
- Arquitectura IoT industrial
- Protocolo MQTT
- Tecnología 5G
- Edge Computing

## 📋 Especificaciones Técnicas

### 🔌 Componentes Obligatorios
1. **Capa de Sensores**:
   - Dispositivos: ESP32 + DHT22
   - Frecuencia de muestreo: 30 segundos
   - Protocolo: MQTT con QoS 1

2. **Red 5G**:
   ```mermaid
   graph LR
   A[Sensores] --> B[IoT Gateway]
   B --> C[gNodeB]
   C --> D[UPF]
   D --> E[Plataforma Cloud]
