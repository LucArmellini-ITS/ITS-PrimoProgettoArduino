bool LED=LOW;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(7,INPUT);
  pinMode(D4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
    if(digitalRead(7)){
      LED=!LED;
      delay(200);
    }
    digitalWrite(D4, LED);
}
