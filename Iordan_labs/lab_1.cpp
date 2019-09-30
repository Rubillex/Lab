#include <iostream>
#include <cmath>
using namespace std;

double testX(int x)
{
return exp(x);
}

int main()
{
int x[5] = {1, 2, 3, 4, 5};

double test_x;

//границы отрезка и n
double a;
double b;
double n;

//значение функции в точке
double y;


std::cout << "input a:" << std::endl;
std::cin >> a;
std::cout << "input b:" << std::endl;
std::cin >> b;
std::cout << "input n:" << std::endl;
std::cin >> n;

//определение шага
double h;
h = (b - a)/n;


double q;
// q = (xi - x0)/h
double L = 0;
double R;
double pn;

//for

for(int i = 0; i <= n; i++)
{
y = testX(x[i]);
L += y*pn;
}

double result;

result = testX(test_x);

std::cout << "resultat= " << result << std::endl;
return 0;
}
