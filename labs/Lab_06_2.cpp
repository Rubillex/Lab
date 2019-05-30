#include <iostream>
#include <ctime>
#include <cstdlib>

#define arr(line,column)    *(arr+line*_line+column)

using namespace std;

int main()
{
	srand(time(NULL));

	int n, line, column, first, second, temp;

  int _column = 18;
  int _line = 24;

	//генерация массива
  cout << "Your array" << endl;
	int * arr = (int *)malloc(_line * _column * sizeof(int));

	for (int line=0; line < _line; line++)
  {
		cout << " " << endl;
		for (int column =0; column < _column; column++)
    {

			arr(line, column)= (rand() % 20);
			cout << arr(line, column);
			if(arr(line, column) > 9)
			{
			    cout << " ";
			} else {
			    cout << "  ";
			}
		}

	}

cout << " " << endl;

cout << "i= ";
cin >> first;
first--;
cout << "j= ";
cin >> second;
second--;
//свап столбцов если условие выполнено
if (first < second)
{
  for (int line = 0; line < _line; line++)
  {
    temp = arr(line, first);
    arr(line, first) = arr(line, second);
    arr(line, second) = temp;
  }
} else
{
  std::cout << "Error: i>j" << '\n';
	exit(1);
}




	//вывод массива
    	cout << "sort:" << endl;
    	for (int line = 0; line < _line; line++) {
    		cout << " " << endl;
    		for (int column = 0; column < _column; column++) {

    			cout << arr(line, column);
    			if(arr(line, column) > 9)
    			{
    			    cout << " ";
    			} else {
    			    cout << "  ";
    			}
    		}

    	}

	return 0;
}
