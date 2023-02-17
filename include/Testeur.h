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
#define Oob 21
#define Oo 20
#define Ovb 19
#define Ob 18
#define Obb 17
#define Ov 16
#define Omb 15
#define Om 14

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

public:   // Attribut ou méthode accèssible à l'extérieur de la class
    Testeur();       // Déclaration du contructeur avec paramètre

    void Ini();  // Initialisation en mode entrée ou sortie dans le setup

    void TypeCable();     // Déclaration de la méthode TypeCable

    void LectureContinuite(); // Déclaration de la méthode LectureContinuite
    
};

