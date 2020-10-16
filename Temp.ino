void setup() {
pinMode (A0, INPUT);
Serial.begin(9600);
}

float v=0;
int x=0;

void loop() {
  delay(1000);
  v=analogRead(A0);
  x=map(v,0,1023,0,63);
  Serial.print("\n");
  Serial.print("Temperatura:");
  Serial.print(x );
  Serial.println(" C");
  Serial.println(v);
}
