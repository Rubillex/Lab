#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main() {
	srand(time(NULL));

	int a = 3, b = 4, c = 7, d, temp;
	int arrA[3];
	int arrB[4];
	int arrC[7];
	int arrD[14];

	d = a + b + c;

	for (int i = 0; i < a; i++) {
		arrA[i] = (rand() % 20);
	}



	for (int i = 0; i < b; i++) {
		arrB[i] = (rand() % 20);
	}


	for (int i = 0; i < c; i++) {
		arrC[i] = (rand() % 20);
	}


	//сортировка массивов

cout << "Array A: ";
	 for (int i = 0; i < a-1; i++) {
	   for (int j = 0; j < a-i-1; j++) {
	     if (arrA[j] > arrA[j+1]){
	       temp = arrA[j];
	       arrA[j] = arrA[j+1];
	       arrA[j+1] = temp;
	     }
	   }
	 }
	 for (int i = 0; i < a; i++) {
		 std::cout << arrA[i] << " ";
	 }
	 std::cout << " " << '\n';

cout << "Array B: ";
	 for (int i = 0; i < b - 1; i++) {
		 for (int j = 0; j < b - i - 1; j++) {
			 if (arrB[j] > arrB[j + 1]) {
				 temp = arrB[j];
				 arrB[j] = arrB[j + 1];
				 arrB[j + 1] = temp;
			 }
		 }
	 }

	 for (int i = 0; i < b; i++) {
		 std::cout << arrB[i] << " ";
	 }
	 std::cout << " " << '\n';

cout << "Array C: ";
	 for (int i = 0; i < c - 1; i++) {
		 for (int j = 0; j < c - i - 1; j++) {
			 if (arrC[j] > arrC[j + 1]) {
				 temp = arrC[j];
				 arrC[j] = arrC[j + 1];
				 arrC[j + 1] = temp;
			 }
		 }
	 }

	 for (int i = 0; i < c; i++) {
		 std::cout << arrC[i] << " ";
	 }
	 std::cout << " " << '\n';
	 //сортировка окончена

	 //Объединение массивов
	 for (int i = 0; i < a; i++) {
		arrD[i] = arrA[i];
	 }

	 for (int i = 0; i < b; i++) {
		 arrD[i + a] = arrB[i];
	 }

	 for (int i = 0; i < c; i++) {
		 arrD[i + b + a] = arrC[i];
	 }




	 for (int i = 0; i < d - 1; i++) {
		 for (int j = 0; j < d - i - 1; j++) {
			 if (arrD[j] > arrD[j + 1]) {
				 temp = arrD[j];
				 arrD[j] = arrD[j + 1];
				 arrD[j + 1] = temp;
			 }
		 }
	 }
	 cout << "Array D: ";


	 for (int i = 0; i < d; i++) {
		 cout << arrD[i] << " ";
	 }

	return 0;
}
