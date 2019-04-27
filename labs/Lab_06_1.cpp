#include <iostream>
#include <ctime>
#include <cstdlib>

#define arr(i,j)    *(arr+i*n+j)

using namespace std;

int main()
{
	srand(time(NULL));

	int n, i, j, sum1, sum2, temp;
	//ввод размерности
	cout << "Your array is arr[n][n]" << endl;
	cout << "n: ";
	cin >> n;

	//генерация массива
	int * arr = (int *)malloc(n * n * sizeof(int));

	for (int i=0; i < n; i++) {
		cout << " " << endl;
		for (int j=0; j < n; j++) {

			arr(i,j)= (rand() % 20);
			cout << arr(i, j) << " ";
		}

	}
	//сортировка
	sum1 = 0;
	sum2 = 0;
	i = 0;
	for (j = 0; j < n; j++) {
		sum1 += arr(i, j);//считаю сумму чисел первой строки
	}
	cout << "sum1= " << sum1 << endl;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n; j++) {
			sum2 += arr(i, j);
		}
		if (sum1 < sum2)
		{
			for (j = 0; j < n; j++)
			{
				temp = arr(i - 1, j);
				arr(i - 1, j) = arr(i, j);
				arr(i, j) = temp;
			}
		}
		sum2 = sum1;
	}



	//вывод массива
	cout << "sort:" << endl;
	for (int i = 0; i < n; i++) {
		cout << " " << endl;
		for (int j = 0; j < n; j++) {

			cout << arr(i, j) << " ";
		}

	}

	return 0;
}
