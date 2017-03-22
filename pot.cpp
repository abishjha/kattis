#include<iostream>
#include<cmath>
using namespace std;

int operationOnNum(int num) {
     int power = num - ((num / 10) * 10);
     int number = num /10;

     return pow(number, power);
}

int main() {
     int numOfCases;
     cin >> numOfCases;
     int sum = 0;
     int temp;
     
     for (int i = 0; i < numOfCases; i++) {
          cin >> temp;
          sum += operationOnNum(temp);
     }

     cout << sum << endl;

     return 0;
}