#include<iostream>
#include<string>
using namespace std;

int main() {
     int numOfCases;
     cin >> numOfCases;
     string input;
     string temp;
     int count = 0;
     string* ptr = new string[numOfCases];

     for (int i = 0; i <= numOfCases; i++) {
          getline(cin, input);
          temp = input.substr(0, 10);

          if (temp == "Simon says") {
               ptr[count] = input.substr(11, (input.length()-10));
               count++;
          }
     }

     for (int i = 0; i < count; i++)
          cout << ptr[i] << endl;

     delete[] ptr;
     return 0;
}