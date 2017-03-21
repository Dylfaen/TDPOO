#include "Vecteur3D.h"

Vecteur3D::Vecteur3D() {
  this->x = 0;
  this->y = 0;
  this->z = 0;
}

Vecteur3D::Vecteur3D(int x, int y, int z) {
  this->x = x;
  this->y = y;
  this->z = z;
}

void Vecteur3D::affiche() {
  cout << "("<< x << ", " << y << ", " << z << ")" << endl;
}

void Vecteur3D::affiche(const char *string) {
  cout << string << endl;
  this->affiche();
}

int Vecteur3D::abcisse() {
  return this->x;
}

int Vecteur3D::ordonnee() {
  return this->y;
}

int Vecteur3D::cote() {
  return this->z;
}

void Vecteur3D::fixer_abcisse(int x) {
  this->x = x;
}

void Vecteur3D::fixer_ordonnee(int y) {
  this->y = y;
}

void Vecteur3D::fixer_cote(int z) {
  this->z = z;
}

bool Vecteur3D::coincide(Vecteur3D v) {
  return (this->x == v.abcisse())&&(this->y == v.ordonnee()) && (this->z == v.cote());
}

double Vecteur3D::produit_scalaire(Vecteur3D v) {
  return this->x * v.abcisse() + this->y * v.ordonnee() + this->z * v.cote();
}

Vecteur3D Vecteur3D::somme(Vecteur3D v) {
  Vecteur3D v2(this->x + v.abcisse(), this->y + v.ordonnee(), this->z + v.cote());
  return v2;
}
