// C++ code
//
int value = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(10, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  value = analogRead(A0);
  analogWrite(9, value);
  value = analogRead(A1);
  analogWrite(10, value);
  value = analogRead(A2);
  analogWrite(11, value);
  delay(10); // Delay a little bit to improve simulation performance
}
