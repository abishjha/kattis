#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
using namespace std;

string reverseDecToBinary(int number) {
     stringstream ss;
     while (number != 0) {
          if (number % 2 == 0)
               ss << '0';
          else
               ss << '1';

          number /= 2;
     }
     return ss.str();
}

int binToDecimal(string temp) {
     int total = 0;
     int tempPlaceHolder = 0;
     int binaryVal;

     for (int i = 0; i < temp.length(); i++) {
          if (temp[i] == '1')
               binaryVal = 1;
          else
               binaryVal = 0;

          tempPlaceHolder = binaryVal * pow(2, (temp.length() - i -1));
          total += tempPlaceHolder;
     }
     return total;
}

int main(){
     int input;
     int inputBinary;
     string temp;
     cin >> input;

     temp = reverseDecToBinary(input);
     cout << binToDecimal(temp) << endl;;

     return 0;
}