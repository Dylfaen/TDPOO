#include <iostream>
#include "Personne.h"
using namespace std;

Personne::Personne(){
  string nom = "de Nazareth";
  string prenom = "Jesus";
  init(nom, prenom, 33);
}

Personne::Personne(const string& nom, const string& prenom, int age) {
  init(nom, prenom, age);
}
Personne::Personne(Personne *personne) {
  init(Personne::vectorCharToString(personne->nom), Personne::vectorCharToString(personne->prenom), personne->age);
}

void Personne::peindre() const{
  cout << "Nom : " << Personne::vectorCharToString(this->nom) << endl;
  cout << "Prenom : " << Personne::vectorCharToString(this->prenom) << endl;
  cout << "Age : " << this->age << endl;
  cout << "-----------" << endl;

}

void Personne::init(const string& nom, const string& prenom, int age) {
    this->nom = Personne::stringToVectorChar(nom);
    this->prenom = Personne::stringToVectorChar(prenom);
    this->age = age;
}

Personne::~Personne(){
  cout << "destruction de " << Personne::vectorCharToString(this->nom) << " " << Personne::vectorCharToString(this->prenom)  << endl;

}

string Personne::vectorCharToString(vector<char> vectorChar) {
  return string(vectorChar.begin(), vectorChar.end());
}

vector<char> Personne::stringToVectorChar(const string &str) {
  vector<char> retour(str.begin(), str.end());
  return retour;
}
