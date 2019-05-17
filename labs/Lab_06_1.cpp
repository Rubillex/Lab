#include <iostream>
#include <ctime>
#include <cstdlib>

#define arr(line,column)    *(arr+line*n+column)

using namespace std;

int main()
{
	srand(time(NULL));

	int n, line, column, sum1, sum2, temp;
	//ввод размерности
	cout << "Your array is arr[n][n]" << endl;
	cout << "n: ";
	cin >> n;

	//генерация массива
	int * arr = (int *)malloc(n * n * sizeof(int));

	for (int line=0; line < n; line++) {
		cout << " " << endl;
		for (int column =0; column < n; column++) {

			arr(line, column)= (rand() % 20);
			cout << arr(line, column) << " ";
		}

	}



	//сортировка
	sum1 = 0;
	sum2 = 0;
	line = 0;
	for (column = 0; column < n; column++) {
		sum1 += arr(line, column);//считаю сумму чисел первой строки
	}
	cout << "sum1= " << sum1 << endl;

	for (line = 1; line < n; line++)
	{
		for (column = 0; column < n; column++) {
			sum2 += arr(line, column);//считаю сумму чисел следующей строки
		}

		if (sum2 > sum1)
		{
			for (int column = 0; column < n; column++)
			{
				temp = arr(line, column);
				arr(line, column) = arr(line-1, column);
				arr(line-1, column) = temp;
			}
		}
		sum1 = sum2;
		sum2 = 0;
	}



	//вывод массива
	cout << "sort:" << endl;
	for (int line = 0; line < n; line++) {
		cout << " " << endl;
		for (int column = 0; column < n; column++) {

			cout << arr(line, column) << " ";
		}

	}

	return 0;
}
