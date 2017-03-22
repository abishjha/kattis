#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main() {
     int busNumbers[1000];
     int numOfCases = 0;
     int start, end;
     stringstream ss;

     cin >> numOfCases;
     for (int i = 0; i < numOfCases; i++) {
          cin >> busNumbers[i];
     }
     sort(busNumbers, busNumbers + numOfCases);

     for (int i = 0; i < numOfCases; i++) {
          if ((busNumbers[i + 1] - 1) == busNumbers[i] && (busNumbers[i + 2] - 2) == busNumbers[i]) {
               start = busNumbers[i];
               while ((busNumbers[i + 1] - 1) == busNumbers[i]) {
                    i++;
                    end = busNumbers[i];
               }
               ss << start << "-" << end << " ";
          }
          else
               ss << busNumbers[i] << " ";
     }

     cout << ss.str() << endl;

     return 0;
}