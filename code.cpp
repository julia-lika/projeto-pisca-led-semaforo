int pinoVerde = 13;
int pinoAmarelo = 12;
int pinoVermelho = 11;

void setup (){
pinMode(pinoVerde, OUTPUT);// verde
pinMode(pinoAmarelo, OUTPUT);// amarelo
pinMode(pinoVermelho, OUTPUT);// vermelho
}

void loop (){
digitalWrite(pinoVermelho, HIGH);
delay(500);
digitalWrite(pinoVermelho, LOW);

digitalWrite(pinoAmarelo, HIGH);
delay(500);
digitalWrite(pinoAmarelo, LOW);

digitalWrite(pinoVerde, HIGH);
delay(500);
digitalWrite(pinoVerde, LOW);
}