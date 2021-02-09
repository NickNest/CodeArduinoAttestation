int Vpered1 = 11;
int Nazad1 = 10;
int Vpered2 = 3;
int Nazad2 = 2;
char InB;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Vpered1, OUTPUT);
pinMode(Vpered2, OUTPUT);
pinMode(Nazad1, OUTPUT);
pinMode(Nazad2, OUTPUT);
}

void loop() {
  if (Serial.available() > 0)
  {
    InB = Serial.read();
  }
  if (InB == '1')
  {
    digitalWrite(Vpered1, 1);
    digitalWrite(Nazad1, 0);
    digitalWrite(Vpered2, 1);
    digitalWrite(Nazad2, 0);
    Serial.print(InB);
  }
    if (InB == '2')
  {
    digitalWrite(Vpered1, 1);
    digitalWrite(Nazad1, 0);
    digitalWrite(Vpered2, 0);
    digitalWrite(Nazad2, 1);
    Serial.print(InB);
  }
    if (InB == '3')
  {
    digitalWrite(Vpered1, 0);
    digitalWrite(Nazad1, 1);
    digitalWrite(Vpered2, 0);
    digitalWrite(Nazad2, 1);
    Serial.print(InB);
  }
    if (InB == '4')
  {
    digitalWrite(Vpered1, 0);
    digitalWrite(Nazad1, 1);
    digitalWrite(Vpered2, 1);
    digitalWrite(Nazad2, 0);
    Serial.print(InB);
  }
      if (InB == '5')
  {
    digitalWrite(Vpered1, 0);
    digitalWrite(Nazad1, 0);
    digitalWrite(Vpered2, 0);
    digitalWrite(Nazad2, 0);
    Serial.print(InB);
  }
delay(200);
}
