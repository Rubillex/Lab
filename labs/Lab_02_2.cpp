
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <conio.h>
using namespace std;

int main(int argc, char const *argv[]) {
float x, y, e;
e = 2.71;

cout << "enter number" << '\n';
cin >> x;
if (x >= 0) {
y = (2 * pow(x, 3) + pow(x, (1 / 3)));
}
else {
y = pow(e, x) / (1 + pow(x, 2)) - 1;
}
cout << "y= " << y;
system("pause");
return 0;
}
