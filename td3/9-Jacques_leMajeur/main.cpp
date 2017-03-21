using namespace std;
#include <iostream>
#include "Vecteur3D.h"


int main() {

  Vecteur3D v1;

  Vecteur3D v2(1, 2, 3);

  v1.affiche("v1");
  v2.affiche("v2");

  return 0;
}
