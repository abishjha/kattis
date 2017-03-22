#include<iostream>
using namespace std;

int main() {
     int trial1, trial2, trial3, trial4 = 0;
     int sumEmma, sumGunnar = 0;

     cin >> trial1 >> trial2 >> trial3 >> trial4;
     sumGunnar = trial1 + trial2 + trial3 + trial4;

     cin >> trial1 >> trial2 >> trial3 >> trial4;
     sumEmma = trial1 + trial2 + trial3 + trial4;

     if (sumEmma > sumGunnar)
          cout << "Emma" << endl;
     else if (sumGunnar > sumEmma)
          cout << "Gunnar" << endl;
     else
          cout << "Tie" << endl;

     return 0;
}