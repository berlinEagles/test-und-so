void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.print("Ich bin...");
delay(1);
Serial.println("der Boss!");
delay(1);
Serial.println("Hab keine Ahnung, was das b und /r/n am Ende soll?!");
delay(1);
}
