#include <iostream>
#include <cmath>

using namespace std;
 int main(){
   float arrA[25];
   float arrB[25];
   float arrC[50];

   float temp;


   cout << "Input arr 1" << endl;
   for (int i = 0; i<25; i++)
   {
     std::cout << "n[" << i+1 << "]= ";
     cin >> arrA[i];
   }

   cout << "Input arr 2" << endl;
   for (int i = 0; i<25; i++)
   {
     std::cout << "n[" << i+1 << "]= ";
     cin >> arrB[i];
   }

   for (int i = 0; i < 25; i++)
   {
     arrC[i] = arrA[i];
   }

   for (int i = 0; i < 25; i++)
   {
     arrC[i+25] = arrB[i];
   }



   for (int i = 0; i < 25; i++) {
	   for (int j = 0; j < 24; j++) {
	     if (arrA[j] > arrA[j+1]){
	       temp = arrA[j];
	       arrA[j] = arrA[j+1];
	       arrA[j+1] = temp;
	     }
	   }
	 }

   for (int i = 0; i < 25; i++) {
	   for (int j = 0; j < 24; j++) {
	     if (arrB[j] > arrB[j+1]){
	       temp = arrB[j];
	       arrB[j] = arrB[j+1];
	       arrB[j+1] = temp;
	     }
	   }
	 }

   for (int i = 0; i < 50; i++) {
	   for (int j = 0; j < 49; j++) {
	     if (arrC[j] > arrC[j+1]){
	       temp = arrC[j];
	       arrC[j] = arrC[j+1];
	       arrC[j+1] = temp;
	     }
	   }
	 }


   cout << "array 1" << endl;
   for (int i = 0; i<25; i++)
   {
     cout << arrA[i] << " ";
   }

   std::cout << " " << '\n';

   cout << "array 2" << endl;
   for (int i = 0; i<25; i++)
   {
     cout << arrB[i] << " ";
   }

   std::cout << " " << '\n';

   cout << "array 3" << endl;
   for (int i = 0; i<50; i++)
   {
     cout << arrC[i] << " ";
   }

 return 0;
 }
