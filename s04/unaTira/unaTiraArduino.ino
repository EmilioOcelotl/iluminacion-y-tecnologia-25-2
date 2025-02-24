const int ledPin = 4; // Usando GPIO 4 para controlar el MOSFET. Deberán ajustar según sea el caso. 

void setup() {
  pinMode(ledPin, OUTPUT); // Configura el pin como salida
}

void loop() {
  digitalWrite(ledPin, HIGH); // Enciende la tira LED (HIGH = 3.3V en el pin)
  delay(1000); // Espera 1 segundo
  digitalWrite(ledPin, LOW); // Apaga la tira LED (LOW = 0V en el pin)
  delay(1000); // Espera 1 segundo
}