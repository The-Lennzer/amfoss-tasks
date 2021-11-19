// C++ code
//
int distance = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(0, OUTPUT);
}

void loop()
{
  distance = 0.01723 * readUltrasonicDistance(2, 2);
  if (distance < 300) {
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(0, HIGH);
  } else {
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(0, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}
