#include<iostream>
#include<iomanip>
using namespace std;

int main() {
     double costPerSqMetre, width, length, totalCost = 0;
     int numOfLawns;
     cin >> costPerSqMetre;
     cin >> numOfLawns;
     for (int i = 0; i < numOfLawns; i++) {
          cin >> width >> length;
          totalCost += width * length * costPerSqMetre;
     }

     cout << setprecision(7) << fixed << totalCost << endl;

     return 0;
}