#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
     int a, b, c;
     cin >> a >> b >> c;

     int a1, d1, a2, d2, a3, d3;
     cin >> a1 >> d1 >> a2 >> d2 >> a3 >> d3;

     int trucks[101] = { 0 };
     //int high = max(d1, d2, d3);
     for (int i = a1; i < d1; i++) {
          trucks[i + 1]++;
     }
     for (int i = a2; i < d2; i++) {
          trucks[i + 1]++;
     }
     for (int i = a3; i < d3; i++) {
          trucks[i + 1]++;
     }

     int total = 0;
     for (int i = 0; i < 101; i++) {
          if (trucks[i] != 0) {
               if (trucks[i] == 1)
                    total += a;
               else if (trucks[i] == 2)
                    total += 2 * b;
               else if (trucks[i] == 3)
                    total += 3 * c;
          }
     }
     cout << total << endl;
     system("pause");
     return 0;
}