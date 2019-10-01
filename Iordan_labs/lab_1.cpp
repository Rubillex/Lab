
#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void fun(int *x, int *f, int n)
{
	for (int i=0; i<n; i++)
	{
		f[i]=exp(x[i]);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double *x = new double[n];
	double *f = new double[n];
	
	    //int x[5]={2, 4, 6, 8, 10}; //значения х
	    //int f[5]; //значения функции
	    
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
	double fi; //значение функции
	fi=exp(xg);
	cout<<"Функция f(i)=e^x";
	for(i=0; i<=n; i++)
	{
	    
	    //начинаемсчитать многочлен Лагранджа
		q=1;
		for(j=0; j<=n; j++)
		{
			if (i!=j)
			{
				p=(xg-x[j])/(x[i]-x[j]);
				q=q*p;
			}
		}
		Ln=Ln+q*f[i];
		
	}
	pg=fabs(fi-Ln); //погрешность относительно тестовой точки
	cout<<"\nИнтерполяционный многочлен Лагранжа:\n"<<Ln;
	cout<<"\nФункция f(i) равна:\n"<<fi;
	cout<<"\nПрактическая погрешность равна:\n"<<pg;
	return 0;
}
