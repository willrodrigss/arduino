int ldr = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int luminosity = map(analogRead(ldr),0,1023,0,100);
  Serial.print("Luminosidade do ambiente: ");
  Serial.print(luminosity);
  Serial.println(" %");
  delay(1000);
}
