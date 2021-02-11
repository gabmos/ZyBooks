/*

*/

#include <iostream>
#include <string.h>
using namespace std;

int main() {
   const int SIZE_LIST = 4;
   int keysList[SIZE_LIST];
   int itemsList[SIZE_LIST];
   int i;

   cin >> keysList[0];
   cin >> keysList[1];
   cin >> keysList[2];
   cin >> keysList[3];

   cin >> itemsList[0];
   cin >> itemsList[1];
   cin >> itemsList[2];
   cin >> itemsList[3];

   /* Your code goes here */
	for (i = 0; i < SIZE_LIST; i++){
		if (keysList[i] > 40){
			cout << itemsList[i] << " ";
		}
	}
   
   cout << endl;

   return 0;
}