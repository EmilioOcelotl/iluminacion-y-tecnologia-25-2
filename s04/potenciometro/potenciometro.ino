// Definir los pines de las tiras LED y el potenciómetro
const int ledPin1 = 4;    // Tira LED 1 en GPIO 4
const int ledPin2 = 16;   // Tira LED 2 en GPIO 16
const int potPin = 14;    // Potenciómetro en GPIO 17 (entrada analógica)

void setup() {
  // Configurar los pines como salidas
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  // Configurar el pin del potenciómetro como entrada
  pinMode(potPin, INPUT);
}

void loop() {
  // Leer el valor del potenciómetro (0-4095 en ESP32)
  int potValue = analogRead(potPin);

  // Mapear el valor del potenciómetro a un rango de delay (por ejemplo, 100 ms a 1000 ms)
  int delayTime = map(potValue, 0, 4095, 100, 2000);

  // Encender la primera tira LED y apagar la segunda
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, LOW);
  delay(delayTime); // Esperar el tiempo controlado por el potenciómetro

  // Encender la segunda tira LED y apagar la primera
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, HIGH);
  delay(delayTime); // Esperar el tiempo controlado por el potenciómetro
}