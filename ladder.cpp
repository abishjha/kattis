#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

const double PI = 3.1415926535897;

int main() {
     int height, angle;
     cin >> height >> angle;
     cout << ceil(height / (sin(angle* PI / 180))) << endl;

     return 0;
}