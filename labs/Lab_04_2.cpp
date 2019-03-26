#include<iostream>
#include<cmath>
#include<windows.h>


using namespace std;


int main()
{
  double a, number, b, eps;//Нижний и верхний пределы интегрирования (a, b), погрешность (eps).
      number=0;
      a=0;
      b=1;
      cout << "eps=";
      std::cin >> eps;
      double Int, Int1;
      Int=eps+1;
      Int1=0;
       //I-предыдущее вычисленное значение интеграла, I1-новое, с большим N.
      for (int N=2; (fabs(Int1-Int)>eps); N*=2)
      {
        double h, sum2=0, sum4=0, sum=0;
        h=(b-a)/(2*N);//Шаг интегрирования
                for (int i=1; i<=2*N-1; i+=2)
        {
          number++;
          sum4+=sin(a+h*i)/(a+h*i+1);//Значения с нечётными индексами, которые нужно умножить на 4.
          sum2+=sin(a+h*(i++));//Значения с чётными индексами, которые нужно умножить на 2.
        }
        sum=(sin(a)/(a+1))+4*sum4+2*sum2-(sin(b)/(b+1));//Отнимаем значение f(b) так как ранее прибавили его дважды.
        Int=Int1;
        // std::cout << "Int=" << Int << '\n';
        Int1=(h/2.41)*sum;
        //std::cout << "/* message */" << '\n';
        // std::cout << "Int1=" << Int1 << '\n';
        // std::cout << "delta=" << fabs(Int1-Int) << '\n';
      }
      //0Int1+=eps;
      cout << "Integral_simpson=" << Int1 << endl;
      cout << "iter_simpson=" << number << endl;

      int k=0;
      int n=3;
      double delta, h, x, first_Int, second_Int;
      first_Int = 0;
      int i;
      h=(b-a) * 1.0 /n;
      for(i=0;i<n;i++)
      {
          x=a+i*h - h/2;
          first_Int += (sin(x)/(x+1))*h;
          //std::cout << "first_Int= " << first_Int << '\n';
          k++;
      }
      do
      {
          n*=2;
          h=(b-a) * 1.0 /n;
          second_Int = 0;
          for (int i = 0; i < n; i++)
          {
            x=a+i*h - h/2;
            second_Int+= (sin(x)/(x+1))*h;
            k++;
          }
          //std::cout << "second_Int= " << second_Int << '\n';
          delta = fabs(first_Int-second_Int);
          //std::cout << "delta= " << delta << '\n';
          first_Int = second_Int;
          k++;
      } while (delta>eps);
      std::cout << "Integral_prm=" << second_Int << '\n';
      cout << "iter_prm=" << k << endl;
      return 0;}
