#include<iostream>
#include<string>
using namespace std;

int main() {
     int numOfCases, numOfCities;
     string nameOfCity;
     int uniqueCities;
     cin >> numOfCases;
     string* ptr = NULL;
     int* ptr1 = new int[numOfCases];
     bool check;

     for (int k = 0; k < numOfCases; k++) {
          cin >> numOfCities;
          ptr = new string[numOfCities];
          uniqueCities = 0;

          for (int i = 0; i < numOfCities; i++) {
               cin >> nameOfCity;
               ptr[i] = nameOfCity;
               check = false;
               for (int j = 0; j < i; j++) {
                    if (nameOfCity == ptr[j])
                         check = true;
               }
               if (check == false)
                    uniqueCities++;
          }
          ptr1[k] = uniqueCities;
     }
     
     for (int i = 0; i < numOfCases; i++) {
          cout << ptr1[i] << endl;
     }

     return 0;
}