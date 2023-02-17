/*
Titre        : Projet Testeur de câble à paire torsadé
  Auteur     : KOUBELAN RICHARD AKPAGNI
  Date       : 17/02/2023
  Description: Ce code nous permet  tester si notre câble est droit, croisé ou si nous avons la continuité 
               du signal
  Version    : 2.1.1
*/

#include <Arduino.h>
#include "../include/Testeur.h" // Insertion du header de la class Testeur

  /*
Signification des acronymes

I : Input soit entré du signal
O : Output soit sorti du signal
ob : Orange-Blanc
o  : Orange
vb : Vert-Blanc
v  : Vert
bb : Bleu-Blanc
b  : Bleu
mb : Marron-Blanc
m  : Marron

*/
// Déclaration de l'objet RJ45
Testeur rj45;

void setup() {
  // Initialisation 
  rj45.Ini();
  // Initialisation du port série
  Serial.begin(9600);
  

  while (!Serial) {
    ; // attendre que le port série soit disponible
  }
}

void loop() {
 // Envoyer le signal sur les broches considéré comme sorti et stocké la valeur lue en entré dans des variables
  
   ;  
      
    
}
