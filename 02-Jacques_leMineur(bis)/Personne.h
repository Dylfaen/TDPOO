#ifndef PERSONNE_H
#define PERSONNE_H
#include <cstring>
#include <iostream>

//Être humain, sans distinction de sexe
class Personne
{
private:
  char* nom;
  char* prenom;
  int age;

public:
  //Constructeur par défaut (nom = "de Nazareth", prenom = "Jesus", age = 33)
  Personne();
  //Constructeur de Personne
  Personne(char *nom, char *prenom, int age);
  //Constructeur par copie
  Personne(Personne*);

  //Méthode d'initialisation des attributs utilisée dans les constructeurs
  void init(char *nom, char *prenom, int age);

  //Méthode qui permet la réalisation de l'oeuvre (également utile pour le débuggage).
  void peindre();

  ~Personne();
};
#endif
