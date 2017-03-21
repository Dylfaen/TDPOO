#include <iostream>

using namespace std;


// float Somme(float a, float b){
//   cout << "float" << endl;
//
//   return a + b;
// }
int Somme(int a, int b){
  cout << "int" << endl;
  return a + b;
}

int Somme(int a, int b, int c ){
  cout << "int 3 param" << endl;
  return a + b + c;
}

float Somme(int a, float b){
  cout << "int + float" << endl;
  return a + b;
}

int* Somme(int a[], int b[]){
  cout << "tab" << endl;

  int *r = new int[10];
  for(int i = 0; i < 10; i++){
    r[i] = a[i] + b[i];
  }
  return r;
}

int main() {

  int tab1[10];
  int tab2[10];

  int* pointeur = new int(2);

  pointeur[0];

  for(int i = 0; i < 10; i++){
    tab1[i] = i;
    tab2[i] = 9 - i;
  }

  int a = Somme(1,2);
  cout << a << endl;
  float b = Somme(1.5f,3.689f);
  cout << b << endl;
  int* c = Somme(tab1, tab2);


  for (int i = 0; i < 10; i++) {
    cout << c[i] << endl;
  }

  int d = Somme(4,5,6);
  cout << d << endl;

  float e = Somme(10,20.89f);
  cout << e << endl;

  short s1 = 1;
  short s2 = 2;

  cout << Somme(s1, s2) << endl;

  delete [] c;

}
