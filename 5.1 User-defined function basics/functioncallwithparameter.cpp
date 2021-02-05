#include <iostream>
using namespace std;

/* Your solution goes here  */
void PrintFeetInchShort(int userFeet, int userInches) {
     cout << userFeet << "' "<< userInches<< "\""<< endl;
}

int main() {
   int userFeet;
   int userInches;
   cin >> userFeet;
   cin >> userInches;
   PrintFeetInchShort(userFeet, userInches);  // Will be run with (5, 8), then (4, 11)
   return 0;
}