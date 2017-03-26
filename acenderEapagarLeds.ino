/*
 * Software name: LedsSSA
 * Description: light up and turn off four leds
 * Author: Valdiney França
 * E-mail: valdiney.2@hotmail.com
 * Github: valdiney.github
*/

/* 
 * Lista contendo quatro posições para armazenar 
  as numerações referentes aos pinos de encaixe dos leds.
*/
int leds[4] = {8,9,10,11};

/**
 * int listLength: Tamanho da lista [leds]
 * int sleep: Temporizador, ou seja, delay
 * 
 * Essa função é utilizada para ligar todos os leds 
 * cujas posições estão alocadas na lista [leds]
 */
void highLeds(int listLength, int sleep) {
  for (int i = 0; i <= listLength; i++) {
   digitalWrite(leds[i], HIGH);
   delay(sleep);
  }
}

/**
 * int listLength: Tamanho da lista [leds]
 * int sleep: Temporizador, ou seja, delay
 * 
 * Essa função é utilizada para desligar todos os leds 
 * cujas posições estão alocadas na lista [leds]
 */
void lowLeds(int listLength, int sleep) {
  for (int i = 0; i <= listLength; i++) {
    digitalWrite(leds[i], LOW);
    delay(sleep);
  }
}

/**
 * int listLength: Tamanho da lista [leds]
 * int listLength: Tamanho da lista [leds]
 * 
 * Essa função é usada para setar a Constant OUTPUT 
 * para todas as numerações dos leds na lista [leds]
 */
void startLeds(int listLength) {
  for (int i = 0; i <= listLength; i++) {
    digitalWrite(leds[i], OUTPUT);
  }
}

void setup() {
  startLeds(4);
}

void loop() {
  highLeds(4, 100);
  delay(100);
  lowLeds(4, 100);
}
