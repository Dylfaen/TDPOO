#include "PileEntier.h"
using namespace std;

int PileEntier::id_max = 0;

PileEntier::PileEntier() : id(id_max+1){
  this->size = 20;
  this->lastFreeIndex = 0;
  PileEntier::id_max++;
  this->pile = new int[this->size];
  this->init(this->size);
}

PileEntier::PileEntier(int n) : id(id_max+1) {
  this->size = n;
  this->lastFreeIndex = 0;
  PileEntier::id_max++;
  this->pile = new int[this->size];
  this->init(this->size);
}

PileEntier::PileEntier(const PileEntier& pile) : id(id_max+1) {
  PileEntier::id_max++;
  int *p = pile.getPile();
  this->size = pile.getSize();
  this->lastFreeIndex = pile.getLastFreeIndex();
  this->pile = new int[this->size];
  for(int i = 0; i < this->size; i++) {
    this->pile[i] = p[i];
  }
}

PileEntier::~PileEntier() {
  cout << "destruction de " << this->id << endl;
  delete [] this->pile;
}

void PileEntier::init(int n) {
  for (int i = 0; i < n; i++) {
    this->pile[i] = 0;
  }
}

void PileEntier::empile(int n) {
  if(plein()) {
    cout << "Pile " << this->id << " pleine." << endl;
  } else {
    this->pile[lastFreeIndex] = n;
    this->lastFreeIndex++;
  }
}

/*
 * Supprime l'élément en haut de la pile et le retourne s'il existe. Retourne 0 si la pile était vide.
 * Remarque : si la valeur dépilée est 0, il est impossible de savoir on a bien dépilé ou si la pile était vide.
 * Amélioration : nous avons passé un *int qui contient le code d'erreur.
 */
int PileEntier::depile(int *erreur) {
  if(vide()) {
    cout << "Pile " << this->id << " vide." << endl;
    *erreur = 0;
    return 0;
  } else {
    int retour = this->pile[lastFreeIndex-1];
    this->pile[lastFreeIndex-1] = 0;
    this->lastFreeIndex--;
    *erreur = 1;
    return this->pile[lastFreeIndex-1];
  }

}

int PileEntier::plein() {
  if(this->lastFreeIndex >= this->size) {
    return 1;
  } else {
    return 0;
  }
}

int PileEntier::vide() {
  if(this->lastFreeIndex == 0) {
    return 1;
  } else {
    return 0;
  }
}

void PileEntier::afficher() {
  cout << this->id << " - | ";
  for(int i = 0; i < this->size; i++) {
    cout << i << " : " << this->pile[i] << " | ";
  }
  cout << endl;
}

int* PileEntier::getPile() const {
  return this->pile;
}

int PileEntier::getSize() const {
  return this->size;
}

int PileEntier::getLastFreeIndex() const {
  return this->lastFreeIndex;
}
