
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
double E, a = 100, sum = 0;
int n = 0;
cin >> E;
do
{
n++;
a = 1.0 / ((3 * n - 2)*(3 * n + 1));
sum = sum + a;
std::cout << "a=" << a << '\n';
} while (abs(a) >= E);
cout << sum;
_getch();
return 0;
}
