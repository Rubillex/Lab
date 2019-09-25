#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <math.h>

#define PI 3.14159265359

double cosinus(double fs, double t)
{
return cos(2*PI*fs*t);
}

using namespace std;

int main()
{
	int AAA;
	for(int j = 0; j < 10000000; j++)
	{
		ofstream fout("fout.txt");
			double fs = 51+j;//32 - это первая частота, 68 - это вторая. 32+68=n
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
			cin >> AAA;
			if(AAA!=1)
			{
				return 0;
			}
	}
}
