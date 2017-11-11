#include<iostream>
#include<string>
using namespace std;

int main() {
     int numOfCases, ithCase = 1;
     string elements[15];
     while (cin >> numOfCases && numOfCases != 0) {
          for (int i = 0, j = numOfCases - 1; i < numOfCases / 2; i++, j--) {
               cin >> elements[i];
               cin >> elements[j];
          }
          if (numOfCases % 2 != 0)
               cin >> elements[((numOfCases + 1) / 2) - 1];

          cout << "SET " << ithCase << endl;
          for (int i = 0; i < numOfCases; i++)
               cout << elements[i] << endl;
          ithCase++;
     }

     return 0;
}