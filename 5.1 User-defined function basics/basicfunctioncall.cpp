#include <iostream>
using namespace std;

void OutputMinutesAsHours(double origMinutes) {

   /* Your solution goes here  */
    bool minok = false; 
    int hour = origMinutes/60;
    if(hour%60 != 0) minok = true;
    int min = ((int)origMinutes%60);
    if(minok)
      cout << hour << "." << min/6;
    else  cout << hour;

}

int main() {
   double minutes;
   cin >> minutes;
   OutputMinutesAsHours(minutes); // Will be run with 210.0, 3600.0, and 0.0.
   cout << endl;
   return 0;
}