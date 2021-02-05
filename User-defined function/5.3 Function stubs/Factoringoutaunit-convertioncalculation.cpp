#include <iostream>
using namespace std;

/* Your solution goes here  */
double MphAndMinutesToMiles( double miles, double time ){
   double hoursTraveled = time / 60.0;
   miles = hoursTraveled * miles;
   return miles;
}

int main() {
   double milesPerHour;
   double minutesTraveled;

   cin >> milesPerHour;
   cin >> minutesTraveled;

   cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

   return 0;
}