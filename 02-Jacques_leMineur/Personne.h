#ifndef PERSONNE_H
#define PERSONNE_H
#include <vector>
#include <string>

using namespace std;

//Être humain, sans distinction de sexe
class Personne
{

private:
  vector<char> nom;
  vector<char> prenom;
  int age;

public:
  //Constructeur par défaut (nom = "de Nazareth", prenom = "Jesus", age = 33)
  Personne();
  //Constructeur de Personne
  Personne(const string& nom, const string& prenom, int age);
  //Constructeur par copie. On utilise un pointeur car on a une fonction init
  Personne(Personne*);

  //Méthode d'initialisation des attributs utilisée dans les constructeurs
  void init(const string& nom,const string& prenom, int age);

  //Méthode qui permet la réalisation de l'oeuvre (également utile pour le débuggage).
  void peindre() const;

  ~Personne();


};
#endif
