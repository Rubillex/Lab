#include <iostream>
#include <cmath>

using namespace std;
 int main(){
   float arrA[25];
   float arrB[25];
   float temp;
   cout << "Input arrA" << endl;
   for (int i = 0; i<25; i++)
   {
     cin >> arrA[i];
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



   cout << "array A" << endl;
   for (int i = 0; i<25; i++)
   {
     cout << arrA[i] << " ";
   }


 return 0;
 }
