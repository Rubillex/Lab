#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctime>

using namespace std;

int main (int argc, char const *argv[]) {
	srand(time(NULL));
  int m, n, x, sum;
  cin >> n;
  cin >> m;
  int **arr = new int* [n];
  for (int i = 0; i <n; i++)
  {
    arr[i] = new int [m];
  }

  for (int i = 0; i < n; i++)
  {
    for (size_t j = 0; j < m; j++) {
      arr[i][j] = (rand() % 20);
      cout << arr[i][j] << " ";
    }
    std::cout << " " << '\n';
  }


  delete []arr;
  return 0;
}
