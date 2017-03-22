#include<iostream>
using namespace std;

int main() {
     int numOfCases;
     cin >> numOfCases;
     int temp, numOfDays = 0;

     for (int i = 0; i < numOfCases; i++) {
          cin >> temp;
          if (temp < 0)
               numOfDays++;
     }

     cout << numOfDays << endl;

     return 0;
}