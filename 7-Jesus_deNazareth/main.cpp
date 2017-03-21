#define copie1(source,dest) source=dest ;
#include <iostream>

using namespace std;

inline void copie2(int source, int dest) {source=dest;}

int main() {

  int source;

  int dest = 3;

  copie1(source,dest);

  cout << source << endl;

  double a = 3.5;

  double b = 1.5;

  copie2(a,b);

  cout << a << " ou " << b << endl;
}
