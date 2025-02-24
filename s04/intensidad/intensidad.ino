const int ledPin = 4; // Usar un pin PWM (en Arduino Uno, los pines PWM son 3, 5, 6, 9, 10, 11)

void setup() {
  pinMode(ledPin, OUTPUT); // Configurar el pin como salida
}

void loop() {
  // Aumentar la intensidad de 0 a 255 (apagado a encendido)
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    analogWrite(ledPin, dutyCycle); // Establecer el ciclo de trabajo
    delay(4); // Pequeño retardo para suavizar la transición (1 segundo / 255 pasos ≈ 4 ms por paso)
  }
  delay(1000); // Esperar 1 segundo en el máximo brillo

  // Disminuir la intensidad de 255 a 0 (encendido a apagado)
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    analogWrite(ledPin, dutyCycle); // Establecer el ciclo de trabajo
    delay(4); // Pequeño retardo para suavizar la transición
  }
  delay(1000); // Esperar 1 segundo en el mínimo brillo (apagado)
}