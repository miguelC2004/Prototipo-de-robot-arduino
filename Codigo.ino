#include <AFMotor.h> //librería Adafruit Motor Shield para controlar los motores

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

char command;  // Variable para almacenar el comando recibido desde el smartphone

void setup() {
  Serial.begin(9600);// Inicializamos la comunicación serial a 9600 baudios
  // Configurar el módulo Bluetooth HC-05
  Serial.println("Ingrese el comando: ");
}

void loop() {
  if (Serial.available() > 0) { // Si hay datos disponibles en el puerto serial
    command = Serial.read(); // Leemos el comando enviado desde el smartphone
    motorControl(command); // Llamamos a la función motorControl para ejecutar el comando
  }
}

void motorControl(char command) {
  switch (command) {
    case 'F': // Si el comando es 'F' (adelante). es lo mismo con los demás casos
      forward();
      break;
    case 'B':
      backward();
      break;
    case 'L':
      left();
      break;
    case 'R':
      right();
      break;
    case 'S':
      stop();
      break;
    default:
      break;
  }
}

void forward() {
  motor1.setSpeed(255); // Establecemos la velocidad máxima con todos los motores, y los configuramos para poder avanzar
  motor1.run(FORWARD); 
  motor2.setSpeed(255);
  motor2.run(FORWARD);
  motor3.setSpeed(255);
  motor3.run(FORWARD);
  motor4.setSpeed(255);
  motor4.run(FORWARD);
}

void backward() {
  motor1.setSpeed(255); //estas son las funciones para retroceder
  motor1.run(BACKWARD);
  motor2.setSpeed(255);
  motor2.run(BACKWARD);
  motor3.setSpeed(255);
  motor3.run(BACKWARD);
  motor4.setSpeed(255);
  motor4.run(BACKWARD);
}
// Configuraciones para retroceder, y moverse a lados izquierdo y derecho
void left() {
  motor1.setSpeed(200); 
  motor1.run(BACKWARD);
  motor2.setSpeed(200);
  motor2.run(BACKWARD);
  motor3.setSpeed(200);
  motor3.run(FORWARD);
  motor4.setSpeed(200);
  motor4.run(FORWARD);
}

void right() {
  motor1.setSpeed(200);
  motor1.run(FORWARD);
  motor2.setSpeed(200);
  motor2.run(FORWARD);
  motor3.setSpeed(200);
  motor3.run(BACKWARD);
  motor4.setSpeed(200);
  motor4.run(BACKWARD);
}
// configuración para detenerse
void stop() {
  motor1.setSpeed(0);
  motor1.run(RELEASE);
  motor2.setSpeed(0);
  motor2.run(RELEASE);
  motor3.setSpeed(0);
  motor3.run(RELEASE);
  motor4.setSpeed(0);
  motor4.run(RELEASE);
}
