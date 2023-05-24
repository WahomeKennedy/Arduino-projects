const int ledPin = LED_BUILTIN;

int ledState = LOW;
// You should use "unsigned long" for variables that hold time
// The value will become quickly too large for int to store
unsigned long previousMillis = 0;  //Will store last time LED was updated

const long interval = 1000; //interval at which to blink

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
unsigned long currentMillis = millis();

if (currentMillis - previousMillis >=interval){
  //save the last time you blinked the led
  previousMillis = currentMillis;

  //if the led is off turn it on and vice versa:
  if (ledState == LOW){
    ledState = HIGH;
  }
  else{
    ledState = LOW;
  }
  // set the LED with the led state of the variable:
  digitalWrite(ledPin, ledState);
}
}
