#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

double fact(double x)
{
	double f;
	for(int i = 1; i<=x; i++)
	{
		f*=i;
	}
	return f;
}


int main()
{
	setlocale(LC_ALL, "Russian");

	int n, N, i, j, k, FFF;
	double a, b;

	//ввод отрезка
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	//ввод n
	cout << "n="; // n частей разбиения
	cin >> n;



	double *x = new double[n];
	double *f = new double[n];
	double xkj;


	double q[4] = {0.3478548451, 0.6521451549, 0.6521451549, 0.3478548451};
	double xj[4] = {-0.8611363116, -0.3399810436, 0.3399810436, 0.8611363116};


	//шаг
	double h;
	h = (b-a)/n;


	x[0] = a; //Xk
	for(k=1; k <= n; k++)
	{
	    x[k] = x[k-1] + h;
	}

    double sumAll = 0;
    double sumF;

    for(j=0; j< n; j++)
    {
        sumF = 0;
       for(k=0; k < n; k++)
	    {
	       xkj=(x[k]+x[k+1])/2+xj[j]*(b-a)/(2*n);
	       f[k]=exp(xkj);
	       sumF+=f[k];
	       cout << "sumF=" << sumF << endl;
    	}
    	sumAll += q[j] * sumF;
    }
    
    
	double result=0;
	double Int = exp(b) - exp(a);
	

	result = (b-a)/(2*n)*sumAll;
    
    double ppog, tpog;
    
	ppog = fabs(result - Int);

	tpog = pow(b-a, 2*n+1)/pow(N,2*n) * pow(fact(n),4)/((pow(fact(2*n),3)*(2*n+1))) * exp(b);



	cout<<"\nИнтеграл методом Гауса:\n" << setprecision(16) <<result;
    cout<<"\nТочное значение интеграла:\n" << setprecision(16) <<Int;
	cout<<"\nПрактическая погрешность равна:\n" << ppog;
	cout<<"\nТеоретическая погрешность равна:\n" << tpog;

    delete [] x;
    delete [] f;
	return 0;
}
