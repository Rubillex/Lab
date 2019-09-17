#include <iostream>
#include <cmath>
using namespace std;

double testX(int x)
{
return exp(x);
}

int main()
{
    
//массивы
int * x = new int[n+1];
int * y = new int[n+1];


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
h = (b - a)/n;



//заполнение массива ИКСАМИ и ЗНАЧЕНИЯМИ ФУНКЦИИ
x[0] = a;

for(int i = 1; i <= n; i++)
{
    x[i] = a+h;
}

for(int i = 0; i <= n; i++)
{
    y[i] = testX(x[i]);
}

//заполнил массивы x[i] и f от i




double q;
// q = (xi - x0)/h
double L = 0;
double R;
double pn;

//for

for(int i = 0; i <= n; i++)
{
L += y[i] * pn;
}

double result;

result = testX(test_x);

std::cout << "resultat= " << result << std::endl;
return 0;
}
