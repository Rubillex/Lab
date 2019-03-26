#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main (int argc, char const *argv[]) {
int k, number, out_number;
float x, z, n, temp, out_x;
  z = 3.4e38;
  number = 0;
  cout << "k=";
  cin >> k;
  cout << "n=";
  cin >> n;
  for (int i=0; i<k; i++) {
    number += 1;
    cout << "x" << number << "=";
    cin >> x;
    temp = x - n;
    if (abs(temp) < z) {
      z = abs(x-n);
      out_number = number;
      out_x = x;
    }
  }
  cout << "serial number= " <<out_number<<'\n';
  cout << "value of number= " << out_x<<'\n';
  return 0;
}
