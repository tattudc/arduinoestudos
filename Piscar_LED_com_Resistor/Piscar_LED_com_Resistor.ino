//Pisca LED com Resistor
//On e OFF com intervalo de 1 seg
void setup(){ //Executa cada vez que o Arduino se inicializa
  pinMode(10, OUTPUT); //Inicializa o pino 10 como saida
}
void loop(){//Funcao loop executada
  digitalWrite(10, HIGH); //Acende o LED, tensao liberada
  delay(1000); //Espera 1s
  digitalWrite(10, LOW); //Apaga o LED, Retira a tensao
  delay(1000);
}
