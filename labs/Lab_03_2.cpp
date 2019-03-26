#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main (int argc, char const *argv[]) {
int x1, y1, n, k, number;
float sum, xi, yi;
 number=1;
  k=1;
  x1=1;
  y1=1;
  sum=0;
  xi = x1;
  yi = y1;
  cout << "n=";
  cin >> n;
  for (int i=0; i<n; i++) {

    if (k>1) {
      yi= xi + yi;
      cout << "y" << number << "=" << yi << endl;
      xi= 0.3 * xi;
      cout << "x" << number << "=" << xi << endl;
      number+=1;
      k+=1;
      sum+= xi/(1+abs(yi));
      cout << "sum=" << sum<< endl;
    } else {
      sum+= xi/(1+abs(yi));
      number+=1;
      k+=1;
    }

  }
  cout << "sum= " <<sum<<'\n';
  return 0;
}
