int soundPin = 2;
int ledPin = 13;
int threshold = 600;

void setup() {
  pinMode(soundPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int soundValue = analogRead(soundPin);
  Serial.println(soundValue);

  if (soundValue > threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(10);
}
