#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() {
     stringstream ss;
     string name;
     cin >> name;

     for (int i = 0; i < name.length(); i++) {
          if (name[i] == name[i + 1]) {
               1;
          }
          else
               ss << name[i];
     }

     cout << ss.str() << endl;;

     return 0;
}