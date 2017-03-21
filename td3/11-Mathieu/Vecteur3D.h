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

  int abcisse();

  int ordonnee();

  int cote();

  void fixer_abcisse(int x);

  void fixer_ordonnee(int y);

  void fixer_cote(int z);

  bool coincide(Vecteur3D v);

  double produit_scalaire(Vecteur3D v);

  Vecteur3D somme(Vecteur3D v);

};
#endif
