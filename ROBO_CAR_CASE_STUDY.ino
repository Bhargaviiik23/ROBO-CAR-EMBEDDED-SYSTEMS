 const int pin1 = 4,pin2 = 5,pin3= 6,pin4=7;
 const  int switchpin1 = 4,switchpin2 =1,switchpin3 = 2,switchpin4 =3 ; 
 int switchState1 = 0,switchState2 = 0,switchState3 = 0,switchState4 = 0;
 void setup() {
  // put your setup code here, to run once:
    pinMode(pin1,OUTPUT);
    pinMode(pin2,OUTPUT);
    pinMode(pin3,OUTPUT);
    pinMode(pin4,OUTPUT);
    pinMode(switchpin1,INPUT);
    pinMode(switchpin2,INPUT);
    pinMode(switchpin3,INPUT);
    pinMode(switchpin4,INPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState1 = digitalRead(switchpin1);
  switchState2 = digitalRead(switchpin2);
  switchState3 = digitalRead(switchpin3);
  switchState4 = digitalRead(switchpin4);
  if (switchState1 == HIGH)
  {
    Serial.println('Forwad');
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    digitalWrite(pin4, LOW);
  }
   if(switchState2 == HIGH)
  {
    Serial.println('Reverse');
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, HIGH);
  }
   if(switchState3 == HIGH)
  {
    Serial.println('Right');
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    digitalWrite(pin4, LOW);
  }
    if(switchState4 == HIGH)
  {
   Serial.println('Left');
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, HIGH);
   digitalWrite(pin4, LOW);
  }
  else
{
   Serial.println('Stop');
   digitalWrite(pin1, LOW);
   digitalWrite(pin2, LOW);
   digitalWrite(pin3, LOW);
   digitalWrite(pin4, LOW);
  }
}
