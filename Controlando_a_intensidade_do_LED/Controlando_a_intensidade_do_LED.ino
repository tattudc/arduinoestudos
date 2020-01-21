//Controlando a intensidade de um LED
//Controle realizado atraves de um Potenciometro 10k

int sensorValue = 0; //Realiza a leitura do Potenciometro
int outputValue = 0; //Realiza a leitura da PWM

void setup(){ //Executa cada vez que inicializa o arduino
  pinMode(9, OUTPUT); //Inicializa o pino 9 como saida
  pinMode(A0, INPUT); //Inicializa o pino A0 como entrada
}
void loop(){ //Funcao loop rodando interruptamente
  sensorValue = analogRead(A0); //Realiza a leitura da entrada analogica
  outputValue = map(sensorValue, 0, 1023, 0, 255); //Mapeia a entrada analogica
  analogWrite(9, outputValue); //Altera o valor da saida analogica
}

