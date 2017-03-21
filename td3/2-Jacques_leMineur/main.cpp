using namespace std;
#include <iostream>
#include "Personne.h"


int main() {
  //Un fameux tableau de personnes : http://bit.ly/1Q9mZ4c
  Personne laCene[13];

 //Pour éviter d'utiliser le constructeur déprécié de char(string) on construit un tableau tridimensionnel de char[20];
  string identites[12][2] = {
    {"l'Apotre", "Barthélemy"},
    {"le Mineur", "Jacques"},
    {"l'Apotre", "Andre"},
    {"Iscariote", "Judas"},
    {"Simon", "Pierre"},
    {"l'Apotre", "Jean"},
    {"l'Apotre", "Thomas"},
    {"le Majeur", "Jacques"},
    {"l'Apotre", "Philippe"},
    {"l'Apotre", "Mathieu"},
    {"d'Edesse", "Thadée"},
    {"le Zélote", "Simon"}
  };

  int i = 0;
  //On peuple le tableau en respectant l'ordre de l'oeuvre originale en sachant que la personne construite par défaut est placé en son centre.
  while(i < 13) {
    //l'age des protagoniste correspond à leur place de gauche a droite sur la peinture.
    int age = i+1;

    //l'index des identité subira un décalage de 1 par rapport à i après le placement du sujet construit par défaut.
    int identiteIndex = i;

    //On place le sujet construit par défut au centre de l'oeuvre.
    if(i == 6) {
      laCene[i] = Personne();
    } else {
      //On ajuste l'age est l'index d'identites après le placement du sujet construit par défaut.
      if(i > 6) {
        age = i;
        identiteIndex = i-1;
      }
      //On place les 12 sujets secondaires.
      laCene[i] = Personne(identites[identiteIndex][0], identites[identiteIndex][1], age);
    }
    i++;
  }

  //Léonard s'entraine pour la réalisation de son sujet principale.
  Personne pCopie = Personne(laCene[6]);
  pCopie.peindre();

  //Une fois les croquis réalisés, Léonard se met au travail.
  for(int pinceau = 0; pinceau < sizeof(laCene)/sizeof(Personne); pinceau++) {
    laCene[pinceau].peindre();
  }

  //Les mécènes n'ont pas été convaincus, retour sur investissement :
  return 0;
}
