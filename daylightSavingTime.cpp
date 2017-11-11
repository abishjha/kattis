#include<iostream>
using namespace std;

int main() {
     int numOfCases;
     cin >> numOfCases;

     int * hourArr = new int[numOfCases];
     int * minArr = new int[numOfCases];

     char input;
     int timeChange, hour, minute;
     for (int i = 0; i < numOfCases; i++) {
          std::cin >> input >> timeChange >> hour >> minute;

          if (input == 'F') {
               if (minute + timeChange > 59) {
                    minute = (minute + timeChange) - 60;
                    hour++;
                    if (minute > 59) {
                         minute = minute - 60;
                         hour++;
                    }
               }
               else
                    minute = minute + timeChange;
          }
          else if (input == 'B') {
               if (minute - timeChange < 0) {
                    minute = 60 + (minute - timeChange);
                    hour--;
                    if (minute < 0) {
                         minute = minute + 60;
                         hour--;
                    }
               }
               else
                    minute = minute - timeChange;
          }
          if (hour > 23)
               hour = hour % 24;
          if (hour < 0)
               hour = 24 + hour;

          hourArr[i] = hour;
          minArr[i] = minute;
     }

     for (int i = 0; i < numOfCases; i++)
          cout << hourArr[i] << " " << minArr[i] << endl;

     delete[] hourArr;
     delete[] minArr;
     return 0;
}