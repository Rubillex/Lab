#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, i, j, k;
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
	double* xkj = new double[n+1][n+1];

	double q[3] = {2, 1, 0.55555, 0.65214};
	double xj[3] = {0, 0.57735, 0.77459, 0.33998};


	//шаг
	double h;
	h = (b-a)/n;


	x[0] = a; //Xk
	for(i=1; i <= n; i++)
	{
	    x[i] = x[i-1] + h;
	}

	for(k=0; k < n; k++)
	{
			for(j=0; j < n; j++)
			{
				xkj[k][j]=(x[j]+x[j+1])/2+xj[j]*(b-a)/(2*(n-1));
			}
	}



	for (int i = 0; i <= n; i++)
	{
		f[i]=exp(xkj[j][i]);
	} //составление функции
	double xg;//тестовая точка
	cout << "xg=";
	cin >> xg;
	double result=0;//ЛАГРАНЖ
	double pg; //погрешность
	double q; //ку
	double p; //ПЭ
	double fi; //значение функции в тестовой точке
	double temp; //temp
	fi=exp(xg);
	cout<<"Функция f(i)=e^x";

	//начинаем считать

	double sum=0;

	for(j=1; j <= n; j++)
	{
		sum+=q[j]*f[j];
	}

	result = (b-a)/(2*(n-1))*sum;


	cout<<"\nИнтерполяционный многочлен Лагранжа:\n" << setprecision(16) <<result;
	cout<<"\nФункция f(i) равна:\n" << setprecision(16) <<fi;
	cout<<"\nПрактическая погрешность равна:\n" <<pg;
	cout<<"\nТеоретическая погрешность равна:\n" <<pog;

	delete [] x;
	delete [] f;
  delete [] xj;
  delete [] xkj;
	return 0;
}
