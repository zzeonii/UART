void setup() {
  Serial.begin(9600);
  pinMode(13, INPUT_PULLUP);
}

void loop() {
  int a = digitalRead(13);
  Serial.write(a);
 
}
