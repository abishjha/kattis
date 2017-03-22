#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
     int numOfCases;
     cin >> numOfCases;
     int temp;
     string output[20];
     stringstream ss;
          
     for (int i = 0; i < numOfCases; i++) {
          cin >> temp;
          ss.str("");
          ss.clear();
          if (temp % 2 == 0) {
               ss << temp;
               ss << " is even" << endl;
               output[i] = ss.str();
          }
          else {
               ss << temp;
               ss << " is odd" << endl;
               output[i] = ss.str();
          }
     }

     for (int i = 0; i < numOfCases; i++) {
          cout << output[i];
     }

     return 0;
}