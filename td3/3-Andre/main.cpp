using namespace std;
#include <iostream>
#include "PileEntier.h"


int main() {


  int erreur;
  int *p = &erreur;

  PileEntier pile;
  pile.afficher();
  int val = pile.depile(p);


  if(erreur) {
    cout << val << endl;
  } else {
    cout << "code d'erreur : " << erreur << endl;
  }

  pile.empile(25);

  pile.afficher();

  PileEntier pile2(1);

  pile2.empile(1);
  pile2.empile(1);

  pile2.afficher();

  PileEntier pile3(pile2);
  pile3.depile(p);

  pile3.afficher();

  pile2.afficher();


  return 0;
}
