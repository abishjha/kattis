#include<iostream>
#include<string>
using namespace std;

int cardValue(bool check, char val) {
     if (check == 1) {
          switch (val) {
          case 'A':
               return 11;
          case 'K':
               return 4;
          case 'Q':
               return 3;
          case 'J':
               return 20;
          case 'T':
               return 10;
          case '9':
               return 14;
          case '8':
          case '7':
               return 0;
          }
     }
     else {
          switch (val) {
          case 'A':
               return 11;
          case 'K':
               return 4;
          case 'Q':
               return 3;
          case 'J':
               return 2;
          case 'T':
               return 10;
          case '9':
          case '8':
          case '7':
               return 0;
          }
     }
}

int main(){
     int numOfCases, sum = 0;
     char dominantSuite;
     string input;
     bool check = 0;
     cin >> numOfCases >> dominantSuite;

     for (int i = 0; i < 4*numOfCases; i++) {
          cin >> input;

          if (input[1] == dominantSuite)
               check = 1;
          else
               check = 0;
          sum += cardValue(check, input[0]);
     }

     cout << sum << endl;

     return 0;
}