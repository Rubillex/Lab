// Метод_Ньютона.cpp: определяет точку входа для консольного приложения

// sourse http://statistica.ru/branches-maths/chislennye-metody-resheniya-uravneniy/#s3b
#include <iostream>
#include <math.h>

using namespace std;

float f(double x) //возвращает значение функции f(x) = x^2-2
{
   return exp(x);
}

float df(float x) //возвращает значение производной
{
   return exp(x);
}

float d2f(float x) // значение второй производной
{
  return exp(x);
}

int main()
{
   int exit = 0, i = 0;//переменные для выхода и цикла
   double x0,xn;// вычисляемые приближения для корня
   double a, b;// границы отрезка

   do {
        i = 0;
          cout<<"Please input [a;b]\n=>";
          cin>>a>>b; // вводим границы отрезка, на котором будем искать корень

          if (a > b) // если пользователь перепутал границы отрезка, меняем их местами
             {
                x0 = a;
                a = b;
                b = x0;
             }

          if (f(a)*f(b)>0) // если знаки функции на краях отрезка одинаковые, то здесь нет корня
              cout<<"\nError! No roots in this interval\n";
          else
           {
             if (f(a)*d2f(a)>0) x0  = a; // для выбора начальной точки проверяем f(x0)*d2f(x0)>0 ?
              else x0 = b;
                   xn = x0-f(x0)/df(x0); // считаем первое приближение
                   cout<<i++<<"-th iteration = "<<xn<<"\n";

             while(exp(x) > xn) // пока не достигнем необходимой точности, будет продолжать вычислять
              {
                x0 = xn;
                xn = x0-f(x0)/df(x0); // непосредственно формула Ньютона
                cout<<i++<<"-th iteration = "<<xn<<"\n";
              }

              double ppog = exp(x) - x0;
              double tpog = 1;

                cout << "\nRoot = " << x0; // вывод вычисленного корня
                cout << "\nRoot(exp_x) = " << exp(x);
                cout << "Pract pogr. =" << ppog;
          }
          cout<<"\nExit?=>";
          cin>>exit;
      } while (exit!=1); // пока пользователь не ввел exit = 1

       return 0;

}
