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
}
