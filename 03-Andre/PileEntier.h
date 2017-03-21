#ifndef PILEENTIER_H
#define PILEENTIER_H
#include <cstring>
#include <iostream>

//Être humain, sans distinction de sexe
class PileEntier
{


  private:
    const int id;
    int* pile;
    int lastFreeIndex;
    int size;

  public:
    static int id_max;
    //Constructeur par défaut (nom = "de Nazareth", prenom = "Jesus", age = 33)
    PileEntier();
    //Constructeur de Personne
    PileEntier(int n);
    //Constructeur par copie
    PileEntier(const PileEntier& pile);

    void init(int n);

    //Méthode d'initialisation des attributs utilisée dans les constructeurs
    void empile(int n);

    int depile(int *erreur);

    int plein();

    int vide();

    void afficher();

    int* getPile() const;
    int getSize() const;
    int getLastFreeIndex() const;


    ~PileEntier();
};
#endif
