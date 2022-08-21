int azul = 1;
int verde = 2;
int vermelho = 3;
String cor;
void setup()
{  
   pinMode(azul, OUTPUT);
   pinMode(verde, OUTPUT);
   pinMode(vermelho, OUTPUT);
}
void color(int r, int g, int b)
{
  analogWrite(vermelho, r);
  analogWrite(verde, g);
  analogWrite(azul, b);
}
void loop()
{
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(azul, HIGH);
    delay(1000);
    digitalWrite(vermelho, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(azul, HIGH);
    delay(1000);
    digitalWrite(vermelho, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, HIGH);
    delay(1000);
}