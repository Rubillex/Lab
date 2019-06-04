#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  srand(time(NULL));
  int number;
  double arr[20];

  cout << "Input the numbers in set (3,20): " << endl;
  cin >> number;
  cout << "Input array elements: " << endl;

  for(int i = 0; i < number; i++)
    {
      arr[i] = (rand() % 100 - 50); // генерация чисел от -50 до 50
      cout << arr[i] << " "; // вывод вектора
    }
    std::cout << " " << '\n';

  double current = arr[0];
  for(int j = 0; j < number; j++)
    {
      if(arr[j] >= arr[j+1]) current = arr[j];
      else
      {
        // Массив не является убывающим
        cout << "The array isn't decreasing";
        exit(0);
      }
    }
  // Массив убывающий
  cout << "The array is decreasing";
  return 0;
}
