#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main (int argc, char const *argv[]) {
float sum = 0, Eps, temp, factorial1=1, factorial2=1;
int n=0;

  cout << "Eps=";
  cin >> Eps;

  do
    {
            n++;
            for (int i=1; i <= n; i++)
              {
                factorial1 *=i;
              };
              for (int i=1; i <= 2*n; i++)
                {
                  factorial2 *=i;
                };
            temp = factorial1 / factorial2;
            std::cout << "element" << "[" << n << "]=" << temp << '\n';
            sum += temp;
            std::cout << "summa" << "[" << n << "]=" << sum << '\n';
            factorial1 = 1;
            factorial2 = 1;
    }
    while (abs(temp)>Eps);


    cout << "sum=" << sum << '\n';
  return 0;
}
