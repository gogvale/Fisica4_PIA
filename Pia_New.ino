// Pines de arduino
int green1 = 5;
int yellow1 = 6;
int red1 = 7;
int green2 = 8;
int yellow2 = 9;
int red2 = 10;
void turnoff(int led){
  // Apaga LED
  digitalWrite(led, LOW);
}
void turnon(int led){
  // Prende LED
  digitalWrite(led, HIGH);
}
void switchled(int ledoff,int ledon,int wait){
  // Apaga un led, prende otro y espera <wait> milisegundos
  turnoff(ledoff);
  turnon(ledon);
  delay(wait);
}
void green2red(int green,int yellow,int red){
  // Secuencia de verde a amarillo a rojo
  switchled(red,green,5000);
  switchled(green,yellow,1500);
  switchled(yellow,red,500);
}
 void empezar(){
  // Define estado inicial e inicia secuencia de transformaci?n de LEDs
  turnon(green1);
  turnon(red2);
  green2red(green1,yellow1,red1);
  green2red(green2,yellow2,red2);
}

void setup(){
  pinMode(green1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red2, OUTPUT);
}

void loop(){
  // Inicia programa en loop indefinidamente
  empezar();
}
