/*
Titre        : Projet Testeur de câble à paire torsadé
  Auteur     : KOUBELAN RICHARD AKPAGNI
  Date       : 17/02/2023
  Description: Ce code nous permet  tester si notre câble est droit, croisé ou si nous avons la continuité
               du signam
  Version    : 2.1.1
*/
#include "../include/Testeur.h" // Insertion du header de la class Testeur
using namespace std;

Testeur::Testeur(int pin1, int pin2, int pin3, int pin4, int pin5, int pin6, int pin7, int pin8)
{ // Définition du contructeur avec paramètre
  Oob = pin1;
  Oo  = pin2;
  Ovb = pin3;
  Ob  = pin4;
  Obb = pin5;
  Ov  = pin6;
  Omb = pin7;
  Om =  pin8;

}

void Testeur::Ini(){
  pinMode(Iob, INPUT);
  pinMode(Io, INPUT);
  pinMode(Ivb, INPUT);
  pinMode(Ib, INPUT);
  pinMode(Ibb, INPUT);
  pinMode(Iv, INPUT);
  pinMode(Imb, INPUT);
  pinMode(Im, INPUT);
  pinMode(Oob, OUTPUT);
  pinMode(Oo, OUTPUT);
  pinMode(Ovb, OUTPUT);
  pinMode(Ob, OUTPUT);
  pinMode(Obb, OUTPUT);
  pinMode(Ov, OUTPUT);
  pinMode(Omb, OUTPUT);
  pinMode(Om, OUTPUT);
}

// Définition de la méthode LecturePotentio qui renvoie La valeur analogique lue de la broche signal du potentiomètre
void Testeur::TypeCable()
{

    if (infIob == Oob && infIo == Oo && infIvb == Ovb && infIb == Ob && infIbb == Obb && infIv == Ov &&
        infImb == Omb && infIm == Om)
    {
        Serial.println("Second test - Type de câble : Votre câble est droit");
        delay(1000);
    }
    else if (infIob == Ovb && infIo == Ov && infIvb == Oob && infIb == Ob && infIbb == Obb && infIv == Oo &&
             infImb == Omb && infIm == Om)
    {
        Serial.println("Second test - Type de câble : Votre câble est croisé");
        delay(1000);
    }
}

// Définition de la méthode AffichagePotentio qui affiche La valeur du potentiomètre au moniteur série
int Testeur::LectureContinuite()
{
  digitalWrite(Oob, HIGH);
  infIob = digitalRead(Iob);

  digitalWrite(Oo, HIGH);
  infIo = digitalRead(Io);

  digitalWrite(Ov, HIGH);
  infIvb = digitalRead(Iv);

  digitalWrite(Ob, HIGH);
  infIb = digitalRead(Ib);

  digitalWrite(Obb, HIGH);
  infIbb = digitalRead(Ibb);

  digitalWrite(Ovb, HIGH);
  infIv = digitalRead(Ivb);

  digitalWrite(Omb, HIGH);
  infImb = digitalRead(Imb);

  digitalWrite(Om, HIGH);
  infIm = digitalRead(Im);

    if (infIob == 1 && infIo == 1 && infIvb == 1 && infIb == 1 && infIbb == 1 && infIv == 1 &&
        infImb == 1 && infIm == 1)
    {

        Serial.println("Premier test - Continuté du signal : On");

        delay(1000);
    }
}