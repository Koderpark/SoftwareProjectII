#define PIN 13
unsigned int count, toggle;

void setup(){
  pinMode(PIN,OUTPUT);
  Serial.begin(115200);
  while(!Serial);
  Serial.println("Hello World");
  count = 0;
  toggle = 0;
  digitalWrite(PIN, toggle);
}

void loop(){
  toggle = toggle_state(toggle);
  digitalWrite(PIN, toggle);
  delay(1000);
}

int toggle_state(int toggle){
  return !toggle;
}