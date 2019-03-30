#include <iostream>
#include <cstdlib>
#include <math.h>

int main(int argc, char **argv)
{
	//1
	double a, x, b, c, D, x1, x2;
	std::cout << "a=";
	std::cin >> a;
	std::cout << "b=";
	std::cin >> b;
	if (a==0 && b==0) {
		std::cout << "бесконечное множество решений" << std::endl;
		} else if (a==0) {
		std::cout << "нет решений" << std::endl;	
		} else {
		x=b/a;
		std::cout << "x=" << x << std::endl;
		}
		
		
	std::cout << "\n\n";
	
	
	std::cout << "a=";
	std::cin >> a;
	std::cout << "b=";
	std::cin >> b;
	std::cout << "c=";
	std::cin >> c;
	
	D=b*b - 4*a*c;
	if (sqrt(D)>0) {
		x1=(-b + sqrt(D))/(2*a);
		x2=(-b - sqrt(D))/(2*a);
		std::cout << "x1=" << x1 << std::endl;
		std::cout << "x2=" << x2 << std::endl;
		} else if (sqrt(D)==0) {
		x=-b/(2*a);
		std::cout << "x=" << x << std::endl;
		}
	else 
		std::cout << "Нет корней" << std::endl;
	
	
	std::cout << "\n\n";	
	
	
	std::cout << "a=";
	std::cin >> a;
	std::cout << "b=";
	std::cin >> b;
	std::cout << "c=";
	std::cin >> c;
	
	D=b*b - 4*a*c;
	if (sqrt(D)>0) {
		std::cout << "Два корня" << std::endl;
		} else if (sqrt(D)==0) {
		std::cout << "Один корень" << std::endl;
		}
	else 
		std::cout << "Нет корней" << std::endl;
		
	
	std::cout << "\n\n";	
	
	
	//АВ=(x2-x1)^2+(y2-y1)^2,АC=(x3-x1)^2+(y3-y1)^2 и BC=(x3-x2)^2+(y3-y2)^2
	double x3, y1, y2, y3, AB, AC, BC;
	std::cout << "x1=";
	std::cin >> x1;
	std::cout << "x2=";
	std::cin >> x2;
	std::cout << "x3=";
	std::cin >> x3;
	std::cout << "y1=";
	std::cin >> y1;
	std::cout << "y2=";
	std::cin >> y2;
	std::cout << "y3=";
	std::cin >> y3;
	AB=sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	AC=sqrt(pow((x3-x1), 2) + pow((y3-y1), 2));
	BC=sqrt(pow((x3-x2), 2) + pow((y3-y2), 2));
	if (AB==AC && AB==BC) {
		std::cout << "Являются вершинами равностороннего треугольника" << std::endl;
		} else
		std::cout << "Не являются вершинами равностороннего треугольника" << std::endl;
	
	
	std::cout << "\n\n";
	
	
	if (AB==AC && AB==BC) {
		std::cout << "Равносторонний" << std::endl;
		} else
	if ((AB==AC && AB!=BC)||(AB==BC && AB!=AC)||(AC==BC && AC!=AB)) {
		std::cout << "Равнобедренный" << std::endl;
		} else
	if ((pow(AB, 2)==pow(BC, 2)+pow(AC, 2))||
	    (pow(BC, 2)==pow(AB, 2)+pow(AC, 2))||
		(pow(AC, 2)==pow(AB, 2)+pow(BC, 2))) {
		std::cout << "Прямоугольный" << std::endl;
			}
			
	std::cout << "\n\n";
	
	
	double A, B, C;
	std::cout << "A=";
	std::cin >> A;
	if(A<0){exit(0);};
	std::cout << "B=";
	std::cin >> B;
	if(B<0){exit(0);};
	std::cout << "C=";
	std::cin >> C;
	if(C<0){exit(0);};
	std::cout << "D=";
	std::cin >> D;
	if(D<0){exit(0);};
	
	if((A==B && C==D)||(A==C && B==D)||(A==D && B==C)) {
		std::cout << "Являются сторонами прямоугольника" << std::endl;
		} else
		std::cout << "Не являются сторонами прямоугольника" << std::endl;
	
	
	//7
	std::cout << "\n\n";
	
	
	std::cout << "Определение отличающегося числа" << std::endl;
	std::cout << "A=";
	std::cin >> A;
	std::cout << "B=";
	std::cin >> B;
	std::cout << "C=";
	std::cin >> C;
	std::cout << "D=";
	std::cin >> D;
	
	if(A==B && A==C && A!=D) {
		std::cout << "4 номер" << std::endl;
	} else
	if(A==B && A!=C && A==D) {
		std::cout << "3 номер" << std::endl;	
	} else
	if(A!=B && A==C && A==D) {
		std::cout << "2 номер" << std::endl;	
	} else
	if(B==C && B==D && B!=A) {
		std::cout << "1 номер" << std::endl;
	}
	
	
	std::cout << "\n\n";
	
	
	//8
	std::cout << "введите размеры сторон двух прямоугольников" << std::endl;
	std::cout << "A=";
	std::cin >> A;
	std::cout << "B=";
	std::cin >> B;
	std::cout << "C=";
	std::cin >> C;
	std::cout << "D=";
	std::cin >> D;
	if(((A<C) && (B<D))||((A<D) && (B<C))) {
		std::cout << "можно уместить прямоугольник AB внутри CD" << std::endl;
	} else {
		std::cout << "Нельзя уместить прямоугольник AB внутри CD" << std::endl;
	}
	
	
	std::cout << "\n\n";
	
	
	//9
	double AL, R, V0, L, g, dalnost;
	g=10;
	
	std::cout << "Введите угол полёта снаряда" << std::endl;
	std::cin >> AL;
	if(AL>=90) {
		exit(0);
	}
	std::cout << "Расстояние до коробля=";
	std::cin >> R;
	std::cout << "Начальная скорость=";
	std::cin >> V0;
	std::cout << "Длина корабля=";
	std::cin >> L;
	
	dalnost=(pow(V0,2)*sin(2*AL))/g;
	
	if(dalnost>R && dalnost<(R+L)) {
		std::cout << "Попал" << std::endl;
	} else
		std::cout << "Промах" << std::endl;
		

	std::cout << "\n\n";
	
	
	//10
	double Y;
	std::cout << "a=";
	std::cin >> a;
	std::cout << "b=";
	std::cin >> b;
	std::cout << "c=";
	std::cin >> c;
	
	Y=(std::max(a,b)+std::max(std::max(a,b),c))/(std::max(a-b,b-c)+(a+b+c));
	std::cout << "Y=" << Y << std::endl;
	
	
	
	std::cout << "\n\n";
	//11
	double X;
	std::cout << "X=";
	std::cin >> X;
	std::cout << "Y=";
	std::cin >> Y;
	
	if(X<0 && Y<0) {
		X=abs(X);
		Y=abs(Y);
		} else
	if(X<0 || Y<0) {
		X+=0.5;
		Y+=0.5;
		} else
	if((X>0.5 && X<2)&&(Y>0.5 && Y<2)){
		X/=10;
		Y/=10;
		}
	std::cout << "X=" << X << std::endl;
	std::cout << "Y=" << Y << std::endl;
	
	
	std::cout << "\n\n";
	//12
	std::cout << "a=";
	std::cin >> a;
	std::cout << "b=";
	std::cin >> b;
	std::cout << "c=";
	std::cin >> c;
	
	if(a==b||a==c||b==c) {
		exit(0);
		} else
	if((a<b && a>c)||(a<c && a>b)) {
		Y=a;
		} else
	if((b<c && b>a)||(b<a && b>c)) {
		Y=b;
		} else
	if((c>a && c<b)||(c>b && c<a)) {
		Y=c;
		}
	std::cout << "Y=" << Y << std::endl;
	
	
	return 0;
}
