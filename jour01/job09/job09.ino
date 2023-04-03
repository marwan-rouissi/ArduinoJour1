byte i;
byte LedMin = 2; //valeur de la 1ere LED
byte LedMax = 10; // valeur de la dernière LED

void setup() {
   for(i=LedMin; i<=LedMax; i++) { pinMode(i, OUTPUT); }
}

void loop() {
   for(i=LedMin; i<=LedMax; i++) { // boucle for (pour i = LedMin et tant que i <= LEDmax, i+=1
      digitalWrite(i, HIGH); // Allumer i
     digitalWrite(i-1, LOW); // Eteindre i-1
      delay(1000); // espacement d'une seconde
   }

}