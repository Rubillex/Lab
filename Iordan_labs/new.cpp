//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <math.h>

#define PI 3.14159265359

double cosinus(double fs, double t)
{
return cos(2*PI*fs*t);
}


double cosinus_3(double t)
{
return cos(2*PI*t);
}



using namespace std;


int first()
{
		ofstream fout("fout.txt");
			double fs = 32;//32 - это первая частота, 68 - это вторая. 32+68=n
			double t;
			double result;

			double b, a, fd, i;

			a = 0;
			b = 1;
			fd = 100;

			double step;

			for(i = 0; i <=200; i++)
			{
			step = (b-a)/(fd);
			t = a + i * step;

			result = cosinus(fs, t);

			fout << t << " " << result << endl;
			cout << t << " " << result << endl;
			}
			cout << "fs= " << fs <<endl;
			return 0;
}

int second()
{
		ofstream fout("fout.txt");
			double fs = 68;//32 - это первая частота, 68 - это вторая. 32+68=n
			double t;
			double result;

			double b, a, fd, i;

			a = 0;
			b = 1;
			fd = 140;

			double step;

			for(i = 0; i <=200; i++)
			{
			step = (b-a)/(fd);
			t = a + i * step;

			result = cosinus(fs, t);

			fout << t << " " << result << endl;
			cout << t << " " << result << endl;
			}
			cout << "fs= " << fs <<endl;
			return 0;
}


double GG(double t, double Td2, int N, double *c[N], double b2, double a, double fd2)
{
	double temp;
	double step, G;
	step = (b2-a)/(fd2);
			for(int i = 0; i < N; i++)
				{


					temp = PI * ((t / Td2) - i);
					if(temp = 0)
					{
						G+= c[i] * 1;
					} else
					{
						G+= c[i] * ((sin(PI*((t/Td2)-i))) / (PI*((t/Td2)-i)));
					}
				}
			return G;
}


int third()
{
	ofstream fout("fout.txt");
	ofstream gout("gout.txt");

			double fs = 20;//32 - это первая частота, 68 - это вторая. 32+68=n
			double t;
			double result;

			double b1, b2, a, fd1, fd2, Td1, Td2, G = 0;
			int N, i;

			cout << "N=";
			cin >> N;

			fd1 = 100;
			fd2 = 400;

			Td1 = 1/fd1;
			Td2 = 1/fd2;

			a = -5;
			b1 = N*Td1+5;
			b2 = N*Td1+5;



			double step;

			cout << "F[t]:";

			for(i = 0; i < N; i++)
			{
			step = (b1-a)/(fd1);
			t = a + i * step;

			result = cosinus_3(t);

			fout << t << " " << result << endl;
			cout << t << " " << result << endl;
			}



			//GGGGGGGGGGGGGGGGGGGG

			double *c = new double[N];


			for(i = 0;i < N * Td2; i++)
				{
					c[i] = cosinus_3(i*Td2);
				}


			cout << "G[t]:";

			for(int j = 0; j < N; j++)
				{
					t = a + j * step;
					G = GG(t, Td2, N, c[N], b2, a, fd2);

					gout << t << " " << G << endl;
					cout << t << " " << G << endl;

					G = 0;
				}



			delete c;

			return 0;
}


int main()
{

	int number;
	setlocale(LC_ALL, "Russian");
	cout << "Выберите номер задания:";
	cin >> number;

	switch (number)
	{
	case 1:
		first();
		break;
	case 2:
		second();
		break;
	case 3:
		third();
		break;
	}

	system("pause");
	return 0;
}
