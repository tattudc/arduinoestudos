//Sinal de transito
//Pisca led com delay continuo e predeterminado
void setup(){ //Executa cada vez que o Arduino se inicializa
  pinMode(5, OUTPUT); //Inicializa o pino 8 como saida
  pinMode(6, OUTPUT); //Inicializa o pino 9 como saida
  pinMode(7, OUTPUT); //Inicializa o pino 10 como saida
}
void loop(){//Funcao loop executada
  digitalWrite(5, HIGH); //Acende o LED, tensao liberada
  delay(4000); //Espera 4s
  digitalWrite(5, LOW); //Apaga o LED, Retira a tensao
  digitalWrite(6, HIGH); //Acende o LED, tensao liberada
  delay(2000); //Espera 2s
  digitalWrite(6, LOW); //Apaga o LED, Retira a tensao
  digitalWrite(7, HIGH); //Acende o LED, tensao liberada
  delay(4000); //Espera 4s
  digitalWrite(7, LOW); //Apaga o LED, Retira a tensao
}
