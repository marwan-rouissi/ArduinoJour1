#define RED_LED 3

void setup() {
   // initialiser les broches
   pinMode(RED_LED, OUTPUT);
}

void loop() {
   for(int i=0; i<=255; i++) { // boucle for pour allumer progressivement la LED
      analogWrite(RED_LED, i);
      delay(10);
   }

   for(int i=255; i>=0; i--) { // boucle for pour éteindre progressivement la LED
      analogWrite(RED_LED, i);
      delay(10);
   }
}