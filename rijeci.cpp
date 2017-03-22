#include<iostream>
using namespace std;

int fibonnaciSequence(int times) {
     int seq[45];
     seq[0] = 1;
     seq[1] = 1;
     for (int i = 2; i <= times; i++)
          seq[i] = seq[i-1] + seq[i-2];

     return seq[times-1];
}

int main() {
     int numOfTimes;
     cin >> numOfTimes;
     int numA = 1, numB = 0;
     
     if (numOfTimes == 1) {
          numA = 0;
          numB = 1;
     }
     else {
          numA = fibonnaciSequence(numOfTimes - 1);
          numB = fibonnaciSequence(numOfTimes);
     }
     cout << numA << " " << numB << endl;

     return 0;
}