#define copie1(source,dest) source=dest ;


#include <iostream>

using namespace std;

inline void copie2(int source, int dest) {source=dest;}

inline int recursive_inline(int a, int b, int nbLoop){
  int retour;
  retour = a + b;
  if(nbLoop > 0){
    return recursive_inline(retour, b, nbLoop-1);
  }
  else{
    return a;
  }
}

int main() {

  int source;

  int dest = 3;

  copie1(source,dest);

  cout << source << endl;

  double a = 3.5;

  double b = 1.5;

  copie2(a,b);

  cout << a << " ou " << b << endl;

  cout << recursive_inline(0,1,10) << endl;

}
