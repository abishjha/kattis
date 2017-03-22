#include<iostream>
using namespace std;

int main() {
     int num, den;

     do {
          cin >> num >> den;
          if (den == 0 && num != 0)
               cout << "cannot divide by 0" << endl;
          else if (den == 0 && num == 0)
               return 0;
          else
               cout << num / den << " " << num - ((num/den) * den) << " / " << den << endl;
     } while (num != 0 || den != 0);

     return 0;
}