#include<iostream>
using namespace std;

int main() {
     int r, l;
     cin >> r >> l;

     if (r == 0 && l == 0) {
          cout << "Not a moose\n";
     }
     else if (r == l) {
          cout << "Even " << r + r << endl;
     }
     else {
          cout << "Odd ";
          if (r > l) {
               cout << 2 * r << endl;
          }
          else {
               cout << 2 * l << endl;
          }
     }

     return 0;
}