void setup() {
  // put your setup code here, to run once:
  pinMode(8, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 if (digitalRead(8) == LOW) {
  Serial.println("0");

 }else if (digitalRead(8) == HIGH) {
  Serial.println("1");

 }
}
