#include "Vecteur3D.h"

// inline Vecteur3D::Vecteur3D() {
//   this->x = 0;
//   this->y = 0;
//   this->z = 0;
// }
//
// inline Vecteur3D::Vecteur3D(int x, int y, int z) {
//   this->x = x;
//   this->y = y;
//   this->z = z;
// }

void Vecteur3D::affiche() {
  cout << "("<< x << ", " << y << ", " << z << ")" << endl;
}

void Vecteur3D::affiche(const char *string) {
  cout << string << endl;
  this->affiche();
}
