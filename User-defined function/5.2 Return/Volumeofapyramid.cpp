#include <iostream>
using namespace std;

/* Your solution goes here  */
double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight){
	double baseArea = baseLength * baseWidth;
	double vol = ((baseArea * pyramidHeight) * 1/3);
	return vol;
}

int main() {
   double userLength;
   double userWidth;
   double userHeight;

   cin >> userLength;
   cin >> userWidth;
   cin >> userHeight;

   cout << "Volume: " << PyramidVolume(userLength, userWidth, userHeight) << endl;

   return 0;
}