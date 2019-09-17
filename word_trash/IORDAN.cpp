#include <iostream>
#include <cmath>
using namespace std;

double testX(int x)
{
return exp(x);
}

int main()
{
int n;
//массивы
int * x = new int[n];
int * y = new int[n];
int * pn = new int[n];


double test_x;

//границы отрезка и n
double a;
double b;
double h;

//значение функции в точке


std::cout << "input a:" << std::endl;
std::cin >> a;
std::cout << "input b:" << std::endl;
std::cin >> b;
std::cout << "input n:" << std::endl;
std::cin >> n;

//определение шага
h = (b - a)/n;

n += 1;


cout << "h=" << h << endl;



//заполнение массива ИКСАМИ и ЗНАЧЕНИЯМИ ФУНКЦИИ
x[0] = a;

for(int i = 1; i <= n; i++)
{
    x[i] = x[i-1] + h;
    cout << "x[" << i << "]=" << x[i] << endl;
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
double temp_pn = 1;

for(int i = 0; i <= n; i++)
{
    for(int j = 0; j <= n; j++)
    {
        if(i!=j)
        {
            temp_pn *= (q-j);   
        }
    }
    pn[i]=pow(-1,n-i)*temp_pn;
    temp_pn = 1;
}


for(int i = 0; i <= n; i++)
{
    
    L += y[i] * pn[i];
}

double result;


for(int i = 0; i <=n; i++)
{

std::cout << "resultat= " << y[i] << std::endl;  
}

return 0;
}
