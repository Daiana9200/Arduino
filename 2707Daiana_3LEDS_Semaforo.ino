void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(10, HIGH);   // darle volatje al pin 10
  delay(500);                       // por un segundo
  digitalWrite(10, LOW);    // apagar el pin 10
  delay(500);                      //por un segundo 
  digitalWrite(11, HIGH);   // darle voltaje al pin 11
  delay(500);                       // por un segundo
  digitalWrite(11, LOW);    // apagar el pin 11
  delay(500);                      //por un segundo
  digitalWrite(12, HIGH);   // darle voltaje al pin 12
  delay(500);                       // por un segundo
  digitalWrite(12, LOW);    // apagar el pin 12
  delay(500);                      //por un segundo

}
