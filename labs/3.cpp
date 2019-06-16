#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main (int argc, char const *argv[]) {

  int k, n, x, sum;

  cout << "x=";
  cin >> x;
  cout << "n=";
  cin >> n;

  for (k = 1; k < n; k++) {
    sum = sum * (1+sin(k*x)) / k;
  }

  cout << "sum=" << sum << '\n';

  return 0;
}
