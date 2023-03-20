int LED = 7;
int Button = 2;

void setup(){
  pinMode(LED,OUTPUT);
  pinMode(Button,INPUT_PULLUP);
}

void loop(){
  if(digitalRead(Button)==LOW)
  { digitalWrite(LED,HIGH);
     }
else{(digitalWrite(LED,LOW));}
     }
     