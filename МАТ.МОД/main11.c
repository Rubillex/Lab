#include <stdio.h>
#include <math.h>
double f(double, double, double);
double g(double, double, double);
double distance(double, double, double*);

int main() {
  FILE *myFile = fopen("file.txt", "w");
	
  int k = 0;
  double t, X, Y;
  double k1, k2, k4, k3, h;
  double q1, q2, q4, q3;
  double OT[2];
  t = 0;
  X = 1.00001;
  Y = 0.0;
  OT[0] = 1;//X
  OT[1] = 0;//Y
  h = 0.01; // шаг
  printf("#t\tX\t\tY\n");
  
  
  for(; (distance(X,Y,OT) < 0.001) && (k++ < 1e6); t += h){
   
    k1 = h * g(t, X, Y);
    q1 = h * f(t, X, Y);
   
    k2 = h * g(t + h/2.0, X + q1/2.0, Y + k1/2.0);
    q2 = h * f(t + h/2.0, X + q1/2.0, Y + k1/2.0);
   
    k3 = h * g(t + h/2.0, X + q2/2.0, Y + k2/2.0);
    q3 = h * f(t + h/2.0, X + q2/2.0, Y + k2/2.0);
   
    k4 = h * g(t + h, X + q3, Y + k3);
    q4 = h * f(t + h, X + q3, Y + k3);
   
    Y = Y + (k1 + 2.0*k2 + 2.0*k3 + k4)/6.0;
    X = X + (q1 + 2.0*q2 + 2.0*q3 + q4)/6.0;

    printf("%15.8g\t%15.8g\t%15.8g\n", t, X, Y);
    fprintf(myFile, "%15.8g\t%15.8g\t%15.8g\n", t, X, Y);
    
  }
  
}
double f(double t, double x, double y){
  return y;
}
double g(double t, double x, double y){
  double alpha = 0.376;
  return alpha * y + x - x * x;
}

double distance(double x, double y, double OT[2]) {
  return sqrt((x - OT[0]) * (x - OT[0]) + (y - OT[1]) * (y - OT[1]));
}
