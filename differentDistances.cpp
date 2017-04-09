#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main() {
     long double x1, y1, x2, y2, p;

     do {
          cin >> x1;

          if (x1 != 0) {
               cin >> y1 >> x2 >> y2 >> p;

               long double answer = pow(abs(x1 - x2), p) + pow(abs(y1 - y2), p);
               answer = pow(answer, 1.0 / p);

               cout << fixed << setprecision(10) << answer << endl;
          }
     } while (x1 != 0);

     return 0;
}