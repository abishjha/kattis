#include<iostream>
#include<string>
using namespace std;

int main() {
     string input;
     cin >> input;

     cout << input[0];
     for (int i = 0; i < input.length(); i++) {
          if (input[i] == '-')
               cout << input[i + 1];
     }
     cout << endl;

     return 0;
}