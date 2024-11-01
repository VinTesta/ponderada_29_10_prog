// Define os pinos a serem usados
const int green = 4;
const int yellow = 32;
const int red = 33;

// Função de inicialização
void setup() {
  // Inicia os pinos no modo output
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

// Função de loop que fica iterando
void loop() {
  semaforo();
}

void semaforo() {
  // Acende o led vermelho
  digitalWrite(red, HIGH);
  delay(6000);
  digitalWrite(red, LOW);
  
  // Acende o led amarelo
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
  
  // Acende o led verde
  digitalWrite(green, HIGH);
  delay(4000);
  digitalWrite(green, LOW);
  
  // Acende o led amarelo
  digitalWrite(yellow, HIGH);
  delay(2000);
  digitalWrite(yellow, LOW);
}
