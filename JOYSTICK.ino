
int Labajo = 8;
int Lderecha = 9;
int Larriba=10;
int Lizquierda = 11; 
int X;
int Y;

void setup(){
  Serial.begin(9600);
  pinMode(Labajo,OUTPUT);
  pinMode(Lderecha,OUTPUT);
  pinMode(Larriba,OUTPUT);
  pinMode(Lizquierda,OUTPUT);
  
}
void loop(){
  
  X = analogRead(A1);
  Y = analogRead(A0);

  
 
  if(Y>=0 && Y<480){//abajo
    digitalWrite(Labajo,HIGH);
    digitalWrite(Lderecha,LOW);
    digitalWrite(Larriba,LOW);
    digitalWrite(Lizquierda,LOW);
  }
  else if(Y>520 && Y<=1023){//arriba
    digitalWrite(Labajo,LOW);
    digitalWrite(Lderecha,LOW);
    digitalWrite(Larriba,HIGH);
    digitalWrite(Lizquierda,LOW);
      
    }
    else if(X>=0 && X<450){ //izquierda
      digitalWrite(Labajo,LOW);
    digitalWrite(Lderecha,LOW);
    digitalWrite(Larriba,LOW);
    digitalWrite(Lizquierda,HIGH);
      
    }
else if(X>520 && X<=1023){// derecha
   digitalWrite(Labajo,LOW);
    digitalWrite(Lderecha,HIGH);
    digitalWrite(Larriba,LOW);
    digitalWrite(Lizquierda,LOW);
}
else{ // medio
         digitalWrite(Labajo,LOW);
    digitalWrite(Lderecha,LOW);
    digitalWrite(Larriba,LOW);
    digitalWrite(Lizquierda,LOW);
}

    
    }
