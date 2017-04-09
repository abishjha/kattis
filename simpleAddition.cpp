#include<iostream>
#include<string>
using namespace std;

int main() {
     string input1, input2, sum;
     cin >> input1;
     cin >> input2;

     if (input1.length() < input2.length()) {
          string temp = input1;
          input1 = input2;
          input2 = temp;
     }
     input1 = '0' + input1;

     int diff = input1.length() - input2.length();
     for (int i = 0; i < diff; i++)
          input2 = '0' + input2;

     for (int i = 0; i < input1.length(); i++)
          sum += '0';

     for (int i = (input1.length() - 1); i >= 0; i--) {
          int num1 = static_cast<int>(input1[i]) - 48;
          int num2 = static_cast<int>(input2[i]) - 48;

          if (num1 + num2 > 9) {
               int numberr = (num1 + num2) / 10;
               input1[i - 1] = static_cast<int>(input1[i - 1]) + numberr;
               numberr = numberr * 10;
               sum[i] = ((num1 + num2) - numberr) + 48;
          }
          else
               sum[i] = num1 + num2 + 48;
     }

     if (sum[0] == '0')
          cout << sum.substr(1, sum.length() - 1) << endl;
     else
          cout << sum << endl;

     return 0;
}