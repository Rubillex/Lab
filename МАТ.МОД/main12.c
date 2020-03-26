#include <stdio.h>
#include <math.h>
double f(double, double, double);
double g(double, double, double);
double distance(double, double, double*);

int main() {
  FILE *myFile = fopen("file2.txt", "w");
	
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
  
  int X_points = 200, Y_points = 7;
  double X_a = -15, X_b = 15, X_step = (X_b - X_a)/(X_points - 1);
  double Y_a = -7, Y_b = 7, Y_step = (Y_b - Y_a)/(Y_points - 1);
  
  for(int x_tmp = 0; x_tmp < X_points; x_tmp++)
  {
	for(int y_tmp = 0; y_tmp < Y_points; y_tmp++)
	{
		
		X = X_a + X_step * x_tmp;
		Y = Y_a + Y_step * y_tmp;
		
	  for(; fabs(X) < 15 && fabs(Y) < 7 && (k++ < 1e6); t += h){
		   
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
