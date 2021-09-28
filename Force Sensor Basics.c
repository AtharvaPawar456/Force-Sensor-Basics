//Force Sensor Basics
int force = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  force = analogRead(A0);
  Serial.println(force);
  if (force <= 557){
    digitalWrite(4, HIGH);
  	digitalWrite(7, LOW);
  }
  if (force >= 1000){
    digitalWrite(4, LOW);
  	digitalWrite(7, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
