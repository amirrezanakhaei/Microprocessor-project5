int sensorValue;   
int led = 10;     
void setup() {
  Serial.begin(9600);  
  pinMode(led, OUTPUT);
}
void loop() {
  sensorValue = analogRead(A0);
  Serial.print("Sensor Value = ");
  Serial.println(sensorValue);
  int brightness = map(sensorValue, 0, 1023, 255, 0);
  analogWrite(led, brightness);
  Serial.print("LED Brightness (PWM) = ");
  Serial.println(brightness);
  delay(100);
}
