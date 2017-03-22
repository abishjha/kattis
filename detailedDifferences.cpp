#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
     string input1, input2;
     int numOfCases;
     cin >> numOfCases;
     stringstream ss;
     string* ptr = new string[numOfCases];

     for (int i = 0; i < numOfCases; i++) {
          cin >> input1;
          cin >> input2;
          ss.str("");
          ss.clear();
          ss << input1 << '\n' << input2 << '\n';
          for (int j = 0; j < input1.length(); j++) {
               if (input1[j] == input2[j])
                    ss << ".";
               else
                    ss << "*";
          }
          ptr[i] = ss.str();
     }
     for (int i = 0; i < numOfCases; i++)
          cout << ptr[i] << endl << endl;

     delete[] ptr;

     return 0;
}