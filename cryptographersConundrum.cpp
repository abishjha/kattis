#include<iostream>
#include<string>
using namespace std;

int main() {
     string input;
     cin >> input;
     int numOfDays = input.length();
     
     for (int i = 0; i < input.length(); i += 3) {
          if (input[i] == 'P')
               numOfDays--;
     }
     for (int i = 1; i < input.length(); i += 3) {
          if (input[i] == 'E')
               numOfDays--;
     }
     for (int i = 2; i < input.length(); i += 3) {
          if (input[i] == 'R')
               numOfDays--;
     }

     cout << numOfDays << endl;

     return 0;
}