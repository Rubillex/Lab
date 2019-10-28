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
return cos(t);
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


  int third() {
 	ofstream fout("3.txt");
 	double N = 25, td, t, i, a = -5, b = 20, G;
 	td = (b - a) / N;

 	for (t = -5; t <= 40; t+=0.01)
 	{
 	 	G = 0;
 	 	for (i = 0; i <= N; i++)
 	 	{
 	 	 	if (((t / td) - i) == 0)
 	 	 	 	G += (cosinus_3(i * td));
 	 	 	else G += (cosinus_3(i * td)) * ((sin(PI * ((t / td) - i))) / (PI *
((t / td) - i)));
 	 	}
 	 	cout << t << " " << G <<  " " << cosinus_3(t) << endl;  	 	fout << t << " " << G <<  " " << cosinus_3(t) << endl;
 	}

 	fout.close();
 	return 0;
}


// double sin_1(double x)
// {
//   return 2*sin(x/1.26+11)+2;
// }
//
// double sin_2(double x)
// {
//   return 2*sin((x-2)/1.26+1.57);
// }

double graf_indiv(double x)
{
  if(x<=2)
  {
    return 2*sin(x/1.278+11)+2;
  } else
  if(x>2 && x<=4)
  {
    return 2*sin((x-2)/1.274+1.57);
  } else
  if(x>4 && x<=6)
  {
    return
  }
}


int tri_dop()
{
  ofstream fout("indiv.txt");
  double N = 25, td, t, i, a = 0, b = 20, G;
  td = (b - a) / N;

  for (t = -5; t <= 40; t+=0.01)
  {
    G = 0;
    for (i = 0; i <= N; i++)
    {
      if (((t / td) - i) == 0)
        G += (graf_indiv(i * td));
      else G += (graf_indiv(i * td)) * ((sin(PI * ((t / td) - i))) / (PI *
((t / td) - i)));
    }
    cout << t << " " << G <<  " " << graf_indiv(t) << endl;  	 	fout << t << " " << G <<  " " << graf_indiv(t) << endl;
  }

  fout.close();
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
	case 4:
		tri_dop();
		break;
	}

	return 0;
}
