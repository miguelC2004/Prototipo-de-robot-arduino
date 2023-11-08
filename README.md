# Control de Motores con Arduino y Bluetooth

Este es un proyecto de prueba para utilizar un Arduino y un módulo Bluetooth para controlar motores de corriente continua (DC) a través de comandos enviados desde un smartphone. El objetivo es mover un vehículo o robot, o detenerlo utilizando esta interfaz.

## Requisitos

- Placa Arduino compatible con el shield de motor Adafruit AFMotor.
- Módulo Bluetooth compatible (por ejemplo, HC-05 o HC-06).
- Cuatro motores de corriente continua (DC).
- Fuente de alimentación adecuada para los motores.
- Smartphone con capacidad Bluetooth para enviar comandos.

## Configuración

1. Conecta los motores al shield de motor Adafruit AFMotor siguiendo las indicaciones del fabricante.

2. Conecta el módulo Bluetooth al Arduino. Asegúrate de que los pines RX y TX estén correctamente conectados.

3. Carga el código proporcionado en este repositorio en tu Arduino utilizando el IDE de Arduino.

4. Abrir una aplicación en un smartphone que pueda enviar comandos a través de Bluetooth, como una aplicación de control remoto.

## Uso

Una vez conectado todo y encendido el Arduino, puedes utilizar una aplicación en tu smartphone para enviar comandos a través de Bluetooth. Los comandos disponibles son:

- `F`: Mover hacia adelante.
- `B`: Mover hacia atrás.
- `L`: Girar a la izquierda.
- `R`: Girar a la derecha.
- `S`: Detenerse.

Los motores responderán a estos comandos y ejecutarán la acción correspondiente.

## Personalización

es posible personalizar la velocidad y la dirección de los motores ajustando los valores en las funciones `forward()`, `backward()`, `left()`, `right()`, y `stop()` en el código. Asegúrate de ajustar las velocidades y direcciones según tus necesidades y la configuración de tu robot o vehículo.

## Contribuciones

Este proyecto es de código abierto, y las contribuciones son bienvenidas.

## Licencia

Este proyecto se distribuye bajo la [Licencia MIT](LICENSE).
