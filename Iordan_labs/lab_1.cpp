
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
	int x[5]={2, 4, 6, 8, 10}; //значения х
	int f[5]; //значения функции
	int n=5, i, j;
	fun(x, f, n); //функция
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
	cout<<"\nПогрешность равна:\n"<<pg;
	return 0;
}
