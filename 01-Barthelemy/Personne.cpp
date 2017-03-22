#include <string>
#include <iostream>
#include "Personne.h"
using namespace std;

//Constructeur par défaut (nom = "de Nazareth", prenom = "Jesus", age = 33)
Personne::Personne(){
  char nom[] = "de Nazareth";
  char prenom[] = "Jesus";
  init(nom, prenom, 33);
}

//Constructeur de personne
Personne::Personne(char *nom, char *prenom, int age) {
  init(nom, prenom, age);
}
//Constructeur par copie
Personne::Personne(Personne *personne) {
  init(personne->nom, personne->prenom, personne->age);
}

//Méthode qui permet la réalisation de l'oeuvre (également utile pour le débuggage/affichage).
void Personne::peindre() const{
  cout << "Nom : " << this->nom << endl;
  cout << "Prenom : " << this->prenom << endl;
  cout << "Age : " << this->age << endl;
  cout << "-----------" << endl;

}

//Fonction d'initialisation d'une personne
void Personne::init(char *nom, char *prenom, int age) {
  for (int i = 0; i < sizeof(nom) || i < sizeof(this->nom); i++) {
    this->nom[i] = nom[i];
  }
  for (int i = 0; i < sizeof(prenom) || i < sizeof(this->prenom); i++) {
    this->prenom[i] = prenom[i];
  }
  this->age = age;
}

//Destructeur de personne qui affiche le nom et prénom de la personne détruite
Personne::~Personne(){
  cout << "destruction de " << this->prenom << " " << this->nom << endl;

}
