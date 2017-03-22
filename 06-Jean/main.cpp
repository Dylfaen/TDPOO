#include <iostream>
using namespace std;

int main() {
  int *p = new int(1);
  const int* q = new int(2);
  int *const r = new int(3) ;

  cout << p << endl;
  cout << q << endl;
  cout << r << endl;

  cout << "--------" << endl;

  int* tab[10];

  for(int i = 0; i < 10; i++) {
    tab[i] = new int(i+1);
    cout << tab[i] << " : " << *tab[i] << endl;
  }

  cout << "--------" << endl;

  for(int i = 0; i < 10; i++) {
    delete tab[i];
  }
  cout << "désallocation" << endl;
  cout << "--------" << endl;

  for(int i = 0; i < 10; i++) {
    cout << tab[i] << " : " << *tab[i] << endl;
  }

  int i = 2;
  int& s = i;
  const int& t = i;

  s += 1;


  cout << p << endl;
  cout << q << endl;
  cout << r << endl;
  cout << s << endl;
  cout << t << endl;


}
