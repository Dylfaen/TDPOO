#include <iostream>
#define MAX1 100

using namespace std;

int main() {

  static const int MAX2 = 100;

  //int *p1=&MAX1;
  const int *p2=&MAX2;

  //cout << p1 << endl;
  cout << p2 << endl;

  return 0;
}
