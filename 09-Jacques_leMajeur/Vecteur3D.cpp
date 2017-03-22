#include "Vecteur3D.h"

void Vecteur3D::affiche() {
  cout << "("<< x << ", " << y << ", " << z << ")" << endl;
}

void Vecteur3D::affiche(const char *string) {
  cout << string << endl;
  this->affiche();
}
