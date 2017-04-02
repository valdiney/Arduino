 /*
 * Software name: LedLDRBuzzer
 * Description: Using LDR sensor to turn up an led and shoot an alarm with buzzer
 * Author: Valdiney França
 * E-mail: valdiney.2@hotmail.com
 * Github: valdiney.github
*/

/*
 * Com o [for] vou incrementando o contador e passando como 
   argumento da função [tone] que gera um sinal de Ondas quadradas
*/
 
 int led = 10;
 int ldr = A5;
 int buzzer = 7;
  
void setup() {
 pinMode(led, OUTPUT);
 pinMode(buzzer, OUTPUT);
 Serial.begin(9600);
}

void loop() {
  int statusLDR = analogRead(ldr);
  
  if (statusLDR >= 800) {
    for (int i = 1; i <= 10000; i++) {
      tone(buzzer,i);
      digitalWrite(led, HIGH);
    }
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    noTone(buzzer);
  }

  Serial.println(statusLDR);
}
