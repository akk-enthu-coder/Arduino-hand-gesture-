const int trig = 12;
const int echo = 13;

const int ledPin = 8;
int duration = 0;
int distance = 0;

void setup(){
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(ledPin,OUTPUT);
  delay(100);
  
}

void loop(){
  digitalWrite(trig,HIGH);
  delayMicroseconds(100);
  digitalWrite(trig,LOW);

  duration = pulseIn(echo,HIGH);
  distance = (duration/2) / 20;

  if (distance <20 ){
    digitalWrite(ledPin,HIGH);
    delay(200);
    digitalWrite(ledPin,LOW);
    delay(10);
    Serial.println("pause");
    delay(10);
  }
}
