#include<iostream>
#include<cmath>
using namespace std;

int main() {
     int dog1attack, dog1calm, dog2attack, dog2calm;
     cin >> dog1attack >> dog1calm >> dog2attack >> dog2calm;
     int people[3];
     cin >> people[0] >> people[1] >> people[2];
     int temp, counter = 0;

     for (int i = 0; i < 3; i++) {
          counter = 0;
          temp = people[i] - floor((dog1attack + dog1calm) * (people[i] / (dog1attack + dog1calm)));
          if (temp <= dog1attack && temp != 0)
               counter++;
          temp = people[i] - floor((dog2attack + dog2calm) * (people[i] / (dog2attack + dog2calm)));
          if (temp <= dog2attack && temp != 0)
               counter++;

          if (counter == 0)
               cout << "none" << endl;
          else if (counter == 1)
               cout << "one" << endl;
          else if (counter == 2)
               cout << "both" << endl;
     }

     return 0;
}