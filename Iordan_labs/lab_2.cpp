#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

double fun(double *x, double *f, int n)
{
	for (int i = 0; i <= n; i++)
	{
		f[i]=exp(x[i]);
	}
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
	cout << "n="; // n частей разбиения
	cin >> n;


	double *x = new double[n+1];
	double *f = new double[n+1];
  double *xj = new double[n+1];
  double *xkj = new double[n+1];


	//шаг
	double h;
	h = (b-a)/n;


	x[0] = a;
	for(i=1; i <= n; i++)
	{
	    x[i] = x[i-1] + h;
	}

	fun(x, f, n); //составление функции
	double xg;//тестовая точка
	cout << "xg=";
	cin >> xg;
	double Ln=0;//ЛАГРАНЖ
	double pg; //погрешность
	double q; //ку
	double p; //ПЭ
	double fi; //значение функции в тестовой точке
	double temp; //temp
	fi=exp(xg);
	cout<<"Функция f(i)=e^x";

	//начинаем считать pn
	



	for(i=0; i<=n; i++)
	{
	    temp = 1;
		for(j=0; j<i; j++)
		{

		    temp*=(q-j)/(i-j);

		}

		for(j=1; j<=(n-i); j++)
		{

		    temp*=(q-i-j)/j;

		}


		p =pow(-1,n-i) * temp;
		Ln+=p*f[i];
	}


	pg=fabs(fi-Ln); //Практическая погрешность

	double omeg = 1;
	double pog;

	for(i = 0; i <= n; i++)
	{
	    omeg*=(q-i)/(i+1);
	}

	pog =pow(h,n+1) * exp(b) *fabs(omeg);

	cout<<"\nИнтерполяционный многочлен Лагранжа:\n" << setprecision(16) <<Ln;
	cout<<"\nФункция f(i) равна:\n" << setprecision(16) <<fi;
	cout<<"\nПрактическая погрешность равна:\n" <<pg;
	cout<<"\nТеоретическая погрешность равна:\n" <<pog;

	delete [] x;
	delete [] f;
  delete [] xj;
  delete [] xkj;
	return 0;
}
