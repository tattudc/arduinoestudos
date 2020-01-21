//Produzindo som com buzzer
//Produzindo som atraves do buzzer

void setup(){
  pinMode(10, OUTPUT);
}
void loop(){
  tone(10, 1500); //Liga o buzzer com frequencia em 1500mhz
  delay(500); //Espera 1/2 seg
  noTone(10); //Desliga o buzzer
  delay(500);
}
