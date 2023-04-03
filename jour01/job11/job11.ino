void setup() {
   pinMode(4, OUTPUT); // déclarer la broche 4 comme sortie
   pinMode(2, INPUT);    // déclarer la broche 2 comme entrée
}

void loop() {
   // à "1" logique, allumer la LED
   if (digitalRead(2) == HIGH) {
      digitalWrite(4, HIGH);
   }
     
   // à "0" logique, éteindre la LED
   if (digitalRead(2) == LOW) {
      digitalWrite(4, LOW);
   }

}