int pot=A2;

void setup() {
  // baud rate(9600)
Serial.begin(9600);

}

void loop() {
  //
//Serial.print(analogRead(pot));
//delay(100);
Serial.println(analogRead(pot));
delay(200);

}
