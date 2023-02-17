/*
Titre        : Projet Testeur de câble à paire torsadé
  Auteur     : KOUBELAN RICHARD AKPAGNI
  Date       : 17/02/2023
  Description: Ce code nous permet  tester si notre câble est droit, croisé ou si nous avons la continuité 
               du signam
  Version    : 2.1.1
*/
#include <Arduino.h>

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


class Testeur // Création de la class Testeur
{
private:  // Attribut ou méthode non accèssible à l'extérieur de la class
  
// Déclaration des variables considéré entrée I:Input 
#define Iob 2 
#define Io 3
#define Ivb 4
#define Ib 5
#define Ibb 6
#define Iv 7
#define Imb 8
#define Im 9

// Déclaration des variables considéré sortir O:Output 
int Oob = 21;
int Oo = 20;
int Ovb = 19;
int Ob = 18;
int Obb = 17;
int Ov = 16;
int Omb = 15;
int Om = 14;

// Declaration des variables de reception du signal envoyé
byte infIob;
byte infIo;
byte infIvb;
byte infIb;
byte infIbb;
byte infIv;
byte infImb;
byte infIm;

byte infOob;
byte infOo;
byte infOvb;
byte infOb;
byte infObb;
byte infOv;
byte infOmb;
byte infOm;

byte valeurContinuite;

public:   // Attribut ou méthode accèssible à l'extérieur de la class
    Testeur(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8);       // Déclaration du contructeur avec paramètre

    void Ini();  // Initialisation en mode entrée ou sortie dans le setup

    void TypeCable();     // Déclaration de la méthode TypeCable

    int LectureContinuite(); // Déclaration de la méthode LectureContinuite
    
};

