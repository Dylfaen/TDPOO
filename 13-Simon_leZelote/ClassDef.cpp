#define TAILLE 3

class Matrice
{
private:
  double mat[TAILLE][TAILLE];
public:
  Matrice(double t[TAILLE][TAILLE]){
    int i,j;
    for(i=0;i<TAILLE;i++)
    for(j=0;j<TAILLE;j++)
    mat[i][j]=t[i][j];
  }
  friend Vecteur produit(Matrice mat, Vecteur vect);
};
class Vecteur {
private:
  double vect[TAILLE];
public:
  Vecteur(double t[TAILLE]){
    for(int i=0;i<TAILLE;i++)
    vect[i]=t[i];
  }

  friend Vecteur produit(Matrice mat, Vecteur vect);

};


Vecteur produit(Matrice mat, Vecteur vect) {
  double x = 0;
  double y = 0;
  double z = 0;
  for(int i = 0; i < TAILLE; i++) {
    x += vect[i]*mat[i][0];
    y += vect[i]*mat[i][1];
    z += vect[i]*mat[i][2];
  }
  Vecteur vr(x, y, z);
  return vr;
}
