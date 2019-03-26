#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main (int argc, char const *argv[]) {
float sum = 0, Eps, x, temp, factorial=1;
int k=0, z;

  cout << "x=";
  cin >> x;
  cout << "Eps=";
  cin >> Eps;

  do
    {
            k++;
            for (int i=1; i <= k+2; i++)
              {
                factorial *=i;
              };
            z=pow(-1,k+2);
            temp = z*(x+2) / factorial;
            sum += temp;
            factorial = 1;
    }
    while (abs(temp)>Eps);


    cout << "sum=" << sum << '\n';
  return 0;
}
