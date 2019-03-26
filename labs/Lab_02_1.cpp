#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main (int argc, char const *argv[]) {
float num, x;

  cout << "enter number" << '\n';
  cin >> num ;
  if (num>=0) {
    x = (-1 * fabs(num-1)) / (2 * num);
  } else {
    x = log(1 + (num * num));
  }
  cout << "result= " << x ;
  return 0;
}
