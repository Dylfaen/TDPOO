using namespace std;
#include <iostream>
#include "Vecteur3D.h"


int main() {

  Vecteur3D v1;

  Vecteur3D v2(1, 2, 3);

  Vecteur3D v3;

  v1.affiche("v1");
  v2.affiche("v2");


  v3.fixer_abcisse(1);
  v3.fixer_ordonnee(2);
  v3.fixer_cote(3);

  cout << "coincide v1 v2 : " << coincide(v1, v2) << endl;
  cout << "coincide v1 v2 : " << coincide(v2, v3) << endl;

  cout << "scalaire v2 v3 : " << v2.produit_scalaire(v3) << endl;

  v2.somme(v3).affiche("somme v2 v3 : ");

  return 0;
}
