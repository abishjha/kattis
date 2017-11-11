#include<iostream>
using namespace std;

int main() {
     int casenum = 0, numi, numq, query;
     while (cin >> numi) {
          int input[1000];
          for (int i = 0; i < numi; i++)
               cin >> input[i];

          cin >> numq;
          printf("Case %d:\n", ++casenum);
          for (int i = 0; i < numq; i++) {
               cin >> query;
               int closestSum = input[0] + input[1];
               for (int j = 0; j < numi; j++) {
                    for (int k = numi - 1; k > j; k--) {
                         int cur = input[j] + input[k];
                         if (abs(closestSum - query) > abs(cur - query))
                              closestSum = cur;
                    }
               }
               printf("Closest sum to %d is %d.\n", query, closestSum);
          }

     }

     return 0;
}