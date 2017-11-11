#include<iostream>
using namespace std;

int main() {
     int cases, num, s1, s2, s3;
     cin >> cases;
     //string* output = new string[cases];

     for (int i = 0; i < cases; i++) {
          s1 = 0, s2 = 0, s3 = 0;
          cin >> num;
          cin >> num;

          for (int j = 1; j <= num; j++) {
               s1 += j;
               s2 += 2 * j - 1;
               s3 += 2 * j;
          }

          cout << i + 1 << " " << s1 << " " << s2 << " " << s3 << endl;
     }
     
     //delete output;
     return 0;
}