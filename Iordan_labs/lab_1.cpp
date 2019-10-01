
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

double fun(double *x, double *f, int n)
{
	for (int i = 0; i < n; i++)
	{
		f[i]=exp(x[i]);
	}
}

int fact(int per)
{
    int res = 1;
    for (int i = 1; i <= per; i++)
    {
        res*= i;
    }
    return res;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n, i, j;
	double a, b;
	//ввод отрезка
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	
	//ввод n
	cout << "n=";
	cin >> n;
	
	
	double *x = new double[n];
	double *f = new double[n];
	
	
	//шаг
	double h;
	h = (b-a)/n;
	
	
	x[0] = a;
	for(i=1; i < n; i++)
	{
	    x[i] = x[i-1] + h;
	}
	
	fun(x, f, n); //составление функции
	double xg=2.6;//тестовая точка
	double Ln=0;//ЛАГРАНЖ
	double pg; //погрешность
	double q; //ку
	double p; //ПЭ
	double fi; //значение функции в тестовой точке
	double temp; //temp
	fi=exp(xg);
	cout<<"Функция f(i)=e^x";
	
	//начинаемсчитать многочлен Лагранджа
	q=(xg-x[0])/h;
		
	for(i=0; i<=n; i++)
	{
	    temp = 1;
		for(j=0; j<=n; j++)
		{
			if (i!=j)
			{
			    temp*=(q-j);
			}
		}
		p =(pow(-1,n-i)) * (temp / ( fact(i) * fact(n-i) ));
		Ln+=p*f[i];
	}
	
	
	pg=fabs(fi-Ln); //Практическая погрешность
	
	double omeg = 1;
	double teor_pog;
	
	for(i = 0; i <= n; i++)
	{
	    omeg*=(q-i);
	}
	
	teor_pog = pow(h,n+1) * (exp(b) / fact(n+1)) * omeg;
	
	cout<<"\nИнтерполяционный многочлен Лагранжа:\n"<<Ln;
	cout<<"\nФункция f(i) равна:\n"<<fi;
	cout<<"\nПрактическая погрешность равна:\n"<<pg;
	cout<<"\nТеоретическая погрешность равна:\n"<<teor_pog;
	
	delete [] x;
	delete [] f;
	return 0;
}
