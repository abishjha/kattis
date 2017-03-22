#include<iostream>
#include<iomanip>
using namespace std;

const double PI = 3.141592654;

int main() {
     double radius;
     int marked, markedInCircle;
     long double* ptr1 = new long double[1000];
     long double* ptr2 = new long double[1000];
     int counter = 0;

     do {
          cin >> radius >> marked >> markedInCircle;
          if (marked != 0 && markedInCircle != 0) {
               ptr1[counter] = PI * radius * radius;
               ptr2[counter] = (markedInCircle*1.0 / marked) * 2 * radius * 2 * radius;
               counter++;
          }
     } while (marked != 0 && markedInCircle != 0);

     for (int i = 0; i < counter; i++) {
          cout << setprecision(10) << ptr1[i] << " " << setprecision(10) << ptr2[i] << endl;
     }

     return 0;
}