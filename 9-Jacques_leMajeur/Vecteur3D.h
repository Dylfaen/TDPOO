#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include <iostream>

using namespace std;

class Vecteur3D
{

private:
  int x;
  int y;
  int z;

public:
  Vecteur3D();

  Vecteur3D(int x, int y, int z);

  void affiche();

  void affiche(const char *string);

};

inline Vecteur3D::Vecteur3D() {
  this->x = 0;
  this->y = 0;
  this->z = 0;
}

inline Vecteur3D::Vecteur3D(int x, int y, int z) {
  this->x = x;
  this->y = y;
  this->z = z;
}
#endif
