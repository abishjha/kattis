#include<iostream>
using namespace std;

int main() {
     int num, sum = 0, speed, hours, temp = 0, count = 0;
     int ptr[10] = {};

     do {
          cin >> num;
          if (num != -1) {
               temp = 0;
               sum = 0;
               for (int i = 0; i < num; i++) {
                    if (i > 0)
                         temp = hours;
                    cin >> speed >> hours;
                    sum += speed * (hours - temp);
               }
               ptr[count] = sum;
               count++;
          }
     } while (num != -1);

     for (int i = 0; i < count; i++)
          cout << ptr[i] << " miles" << endl;

     return 0;
}