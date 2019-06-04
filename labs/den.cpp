#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  srand(time(NULL));
  int number;
  double arr[20];

  cout << "Input array elements: " << endl;

  for(int i = 0; i < 20; i++)
    {
      arr[i] = (rand() % 100 - 50); // генерация чисел от -50 до 50
      cout << arr[i] << " "; // вывод вектора
    }
    std::cout << " " << '\n';

  double current = arr[0];
  for(int j = 0; j < 20; j++)
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
