#define PIN 7 

void setup() {
  pinMode(PIN,OUTPUT);

  digitalWrite(PIN, LOW);
  delay(1000);
}

void loop() {
  for(int i=0; i<5; i++){
    digitalWrite(PIN, HIGH);
    delay(100);
    digitalWrite(PIN, LOW);
    delay(100);
  }
  digitalWrite(PIN, HIGH);
  while(true);
}
