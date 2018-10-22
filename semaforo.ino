// Pines de arduino
int green1 = 5
int yellow1 = 6
int red1 = 7
int green2 = 8
int yellow2 = 9
int red2 = 10

void turnoff(led){
  // Apaga LED
  digitalWrite(led, LOW);
}
void turnon(led){
  // Prende LED
  digitalWrite(led, HIGH);
}
void switchled(ledoff,ledon,wait){
  // Apaga un led, prende otro y espera <wait> milisegundos
  turnoff(ledoff);
  turnon(ledon);
  sleep(wait);
}
void green2red(green,yellow,red){
  // Secuencia de verde a amarillo a rojo
  switchled(red,green,5000);
  switchled(green,yellow,1500);
  switchled(yellow,red,500);
}
void main(){
  // Define estado inicial e inicia secuencia de transformación de LEDs
  turnon(green1);
  turnon(red2);
  green2red(green1,yellow1,red1);
  green2red(green2,yellow2,red2);
}
void loop(){
  // Inicia programa en loop indefinidamente
  main();
}