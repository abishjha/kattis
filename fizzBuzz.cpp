#include<iostream>
using namespace std;

int main() {
     int x, y, lastInt;
     cin >> x >> y >> lastInt;
     if (lastInt <= 100) {
          for (int i = 1; i <= lastInt; i++) {
               if (i % x == 0 && i % y == 0)
                    cout << "FizzBuzz" << endl;
               else if (i % x == 0)
                    cout << "Fizz" << endl;
               else if (i % y == 0)
                    cout << "Buzz" << endl;
               else
                    cout << i << endl;
          }
     }
     else
          cout << "size of sequence too large" << endl;

     return 0;
}