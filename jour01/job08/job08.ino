#define BROCHE_LED_ROUGE 0
#define BROCHE_LED_VERTE 1

void setup(){
pinMode(BROCHE_LED_ROUGE,OUTPUT); //règle la borne numérique numéro 0 de la carte Arduino en mode sortie
pinMode(BROCHE_LED_VERTE,OUTPUT); //règle la borne numérique numéro 1 de la carte Arduino en mode sortie
}
 
void loop(){
digitalWrite(BROCHE_LED_ROUGE,HIGH); //la LED rouge s’allume
digitalWrite(BROCHE_LED_VERTE,LOW); // la LED vert s’éteint
delay(200);
digitalWrite(BROCHE_LED_ROUGE,LOW); //la LED rouge s’éteint
digitalWrite(BROCHE_LED_VERTE,HIGH); //la LED vert s’allume
delay(100);
}