const int ledpin =12;
const int buttonpin =2;
int buttonState =0;

void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(buttonpin,INPUT);
  }

void loop() {
   buttonState=digitalRead(buttonpin);
if (buttonState==HIGH){
  digitalWrite(ledpin,LOW);
}else{
  digitalWrite(ledpin,HIGH);
}
}
