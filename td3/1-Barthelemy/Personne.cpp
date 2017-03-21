#include <string>
#include <iostream>
#include "Personne.h"
using namespace std;

Personne::Personne(){
  char nom[] = "de Nazareth";
  char prenom[] = "Jesus";
  init(nom, prenom, 33);
}

Personne::Personne(char *nom, char *prenom, int age) {
  init(nom, prenom, age);
}
Personne::Personne(Personne *personne) {
  init(personne->nom, personne->prenom, personne->age);
}

void Personne::peindre() const{
  cout << "Nom : " << this->nom << endl;
  cout << "Prenom : " << this->prenom << endl;
  cout << "Age : " << this->age << endl;
  cout << "-----------" << endl;

}

void Personne::init(char *nom, char *prenom, int age) {
  for (int i = 0; i < sizeof(nom) || i < sizeof(this->nom); i++) {
    this->nom[i] = nom[i];
  }
  for (int i = 0; i < sizeof(prenom) || i < sizeof(this->prenom); i++) {
    this->prenom[i] = prenom[i];
  }
  this->age = age;
}

Personne::~Personne(){
  cout << "destruction de " << this->prenom << " " << this->nom << endl;

}
