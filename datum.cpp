#include<iostream>
#include<string>
using namespace std;

string getDay(int num) {
     switch (num) {
     case 1: return "Thursday";
     case 2: return "Friday";
     case 3: return "Saturday";
     case 4: return "Sunday";
     case 5: return "Monday";
     case 6: return "Tuesday";
     case 0: return "Wednesday";
     }
}

int main() {
     int days, month, num = 0;
     cin >> days >> month;

     int monthArray[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

     for (int i = 0; i < (month - 1); i++)
          num += monthArray[i];

     num += days;
     num %= 7;

     cout << getDay(num) << endl;
     return 0;
}