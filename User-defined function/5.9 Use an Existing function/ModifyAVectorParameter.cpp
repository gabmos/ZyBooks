/*
Write a function SwapVectorEnds() that swaps the first and last elements of its vector parameter. 
Ex: sortVector = {10, 20, 30, 40} becomes {40, 20, 30, 10}.
*/
#include <iostream>
#include <vector>
using namespace std;

/* Your solution goes here  */
void SwapVectorEnds(vector<int>& regVector){
	int i = 0;
	int tempVal = regVector.at(0);
	int vectorsize = regVector.size();

	tempVal = regVector.at(i);
	regVector.at(i) = regVector.at(vectorsize - 1 - i);
	regVector.at(vectorsize - 1 - i) = tempVal;

	return;
}

int main() {
   vector<int> sortVector(4);
   unsigned int i;
   int userNum;

   for (i = 0; i < sortVector.size(); ++i) {
      cin >> userNum;
      sortVector.at(i) = userNum;
   }

   SwapVectorEnds(sortVector);

   for (i = 0; i < sortVector.size(); ++i) {
      cout << sortVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}