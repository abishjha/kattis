#include<iostream>
using namespace std;

int main() {
     int input[10];
     int moduloResults[10];
     int uniqueNumbers = 0;
     bool check = true;

     for (int i = 0; i < 10; i++) {
          check = true;
          cin >> input[i];
          moduloResults[i] = input[i] % 42;
          for (int j = 0; j < i; j++) {
               if (moduloResults[i] == moduloResults[j])
                    check = false;
          }
          if (check == true)
               uniqueNumbers++;
     }

     cout << uniqueNumbers << endl;

     return 0;
}