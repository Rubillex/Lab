#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void insertsort(int *a, int n) // insertsort
{
    for (int i=1; i<n; i++)
    {
        for(int j=i; j>0 && a[j-1]>a[j]; j--)
        swap(a[j-1],a[j]);
    }
}

int main()
{
  srand(time(NULL));

  int n; // размер вектора
  cout << "enter n: ";
  cin>>n; // ввод вектора

  int *a=new int[n]; // новый вектор

  for (size_t i = 0; i < n; i++) {
    a[i] = (rand() % 100 - 50); // генерация чисел от -50 до 50
    cout << a[i] << " "; // вывод вектора
  }


  cout << " " << '\n';
  insertsort(a,n); // вызов intersort

  cout << "Array Sort:" << '\n'; // вывод вектора
  for (size_t i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

    return 0;
}
