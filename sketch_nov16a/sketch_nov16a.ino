#include <f401reMap.h>

int a = pinMap(12);
int b = pinMap(1);
void setup() {
  // put your setup codel here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  delay(500);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  delay(500);
}
