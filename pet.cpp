#include<iostream>
using namespace std;

int main() {
     int grade[4];
     int contestant[5];

     for (int i = 0; i < 5; i++) {
          cin >> grade[0] >> grade[1] >> grade[2] >> grade[3];

          contestant[i] = grade[0] + grade[1] + grade[2] + grade[3];
     }

     int highest = 0, highestNum = 0;
     for (int i = 0; i < 5; i++) {
          if (contestant[i] > highest) {
               highest = contestant[i];
               highestNum = i+1;
          }
     }
     cout << highestNum << " " << highest << endl;

     return 0;
}