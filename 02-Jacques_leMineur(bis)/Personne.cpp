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

Personne::Personne(Personne *personne){
  init(personne->nom, personne->prenom, personne->age);
}

void Personne::peindre() {

  cout << "Nom : " << this->nom << endl;
  cout << "Prenom : " << this->prenom << endl;
  cout << "Age : " << this->age << endl;
  cout << "-----------" << endl;
}

void Personne::init(char *nom, char *prenom, int age) {
  this->nom = new char[sizeof(nom)];
  this->prenom = new char[sizeof(prenom)];


  strcpy(this->nom, nom);
  strcpy(this->prenom, prenom);


  this->age = age;
}

Personne::~Personne(){
  cout << "destruction de " << this->prenom << " " << this->nom << endl;
  //Ici on utilise des delete car on a créer des objets à l'aide de new
  delete [] this->nom;
  delete [] this->prenom;
}
