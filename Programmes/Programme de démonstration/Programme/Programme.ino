/*
   "MICROCONTRÔLEUR ARDUINO SON ET LUMIÈRE PB200" Pierron référence 33176
   Programme V1.0 : "Programme"
   Rédacteur : M. PAUL Pierre 2024

   *L'utilisation d'une carte non officielle nécessite la configuration "Old Booltloader" !
*/

// Déclarations des entrées et sorties.
#define DEL_VERTE 11
#define DEL_JAUNE 10
#define DEL_ROUGE 9
#define DEL_BLEUE 8
#define BOUTON_POUSSOIR_VERT 2
#define BOUTON_POUSSOIR_JAUNE 3
#define BOUTON_POUSSOIR_ROUGE 4
#define BOUTON_POUSSOIR_BLEU 5
#define BUZZER 12

void setup() {
  // Définition des entées et des sorties de la carte Arduino NANO.
  pinMode(DEL_VERTE, OUTPUT);
  pinMode(DEL_JAUNE, OUTPUT);
  pinMode(DEL_ROUGE, OUTPUT);
  pinMode(DEL_BLEUE, OUTPUT);
  pinMode(BOUTON_POUSSOIR_VERT, INPUT);
  pinMode(BOUTON_POUSSOIR_JAUNE, INPUT);
  pinMode(BOUTON_POUSSOIR_ROUGE, INPUT);
  pinMode(BOUTON_POUSSOIR_BLEU, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // Programme de démonstration.
  if (digitalRead(BOUTON_POUSSOIR_VERT) == HIGH)
  {
    digitalWrite(DEL_VERTE, HIGH);
    tone(BUZZER, 250);
    delay(250);
    noTone(BUZZER);
  }
  else
  {
    digitalWrite(DEL_VERTE, LOW);
  }
  if (digitalRead(BOUTON_POUSSOIR_JAUNE) == HIGH)
  {
    digitalWrite(DEL_JAUNE, HIGH);
    tone(BUZZER, 500);
    delay(250);
    noTone(BUZZER);
  }
  else
  {
    digitalWrite(DEL_JAUNE, LOW);
  }
    if (digitalRead(BOUTON_POUSSOIR_ROUGE) == HIGH)
  {
    digitalWrite(DEL_ROUGE, HIGH);
    tone(BUZZER, 750);
    delay(250);
    noTone(BUZZER);
  }
  else
  {
    digitalWrite(DEL_ROUGE, LOW);
  }
    if (digitalRead(BOUTON_POUSSOIR_BLEU) == HIGH)
  {
    digitalWrite(DEL_BLEUE, HIGH);
    tone(BUZZER, 1000);
    delay(250);
    noTone(BUZZER);
  }
  else
  {
    digitalWrite(DEL_BLEUE, LOW);
  }
}
