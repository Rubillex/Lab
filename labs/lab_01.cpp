#include <iostream>
#include <cstdlib>

using namespace std;

int main (int argc, char const *argv[]) {
int D;
int A;
int result;
int num;

cout << "enter the number" <<endl;
cin >> num;

    A = num / 1000;
    cout << A << endl;
    D = num % 10;
    cout << D << endl;
    result = A + D;
    cout << result << endl;

return 0;
}
