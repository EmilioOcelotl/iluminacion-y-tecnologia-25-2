// Pin del LED incorporado (GPIO 2)
const int ledPin = 2;

void setup() {
  // Configura el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Enciende el LED
  digitalWrite(ledPin, HIGH);
  delay(1000); // Espera 1 segundo

  // Apaga el LED
  digitalWrite(ledPin, LOW);
  delay(1000); // Espera 1 segundo
}