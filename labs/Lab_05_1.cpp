#include <iostream>
#include <cmath>

using namespace std;
int main() {
  int arr[9];
  cout << "Input array" << '\n';
  for (int i = 0; i < 10; i++) {
    arr[i] = i+1;
    cout << arr[i] << " ";
  }
  for (int j = 1; j<=9; j++)
  {
    if (j < 7) {
      arr[j] = arr[j+3];
    } else {
      arr[j] = 0;
    }
  }
  cout << " " << '\n';
  for (int k = 0; k < 9; k++)
  {
    cout << arr[k] << " ";
  }
  cout << "0\n";
  return 0;
}
