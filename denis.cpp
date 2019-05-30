#include "iostream"
#include "cstdlib"
#include "ctime"
using namespace std;

int main()
{
  int p, temp;
  int a[200],k;

  cout << "Vvedite N: ";
  cin >> k;

  //k=2*k;

  int *arr = new int[k];
  srand(time(NULL));
  cout << "Elementy: \n";
  for(int i =0;i<k;i++)
  {
    arr[i] =rand()%200-100;
    cout << arr[i]<<" ";
  }
std::cout << " " << '\n';
std::cout << "-------" << '\n';

  p = 1;
  for (int i = 0; i<k/2; i++)
  {
    std::cout << "arr[" << i+1 << "]= " << arr[i] << '\n'; // проверка элемента
    std::cout << "arr[" << k-i << "]= " << arr[k-1-i] << '\n'; // проверка элемента
    temp = arr[i] + arr[k-1-i];
    std::cout << "temp= " << temp << '\n';
    p *= temp;
  }

  std::cout << "y= " << p << '\n';
delete [] arr;
return 0;
}

