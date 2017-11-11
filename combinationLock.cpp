#include<iostream>
using namespace std;

int main() {
     int a, b, c, d, degrees, init;
     while(1){
          cin >> a >> b >> c >> d;
          if (a == 0 && b == 0 && c == 0 && d == 0)
               break;
          else {
               degrees = 0; //initial
               degrees += 720; //two clockwise turns
               degrees += (((40 - b) + a) % 40) * 9; //first number
               a = b; //initial position is first number
               degrees += 360; //one counter-clockwise turn
               degrees += (((40 - a) + c) % 40) * 9; //second number
               a = c; //initial position is second number
               degrees += (((40 - d) + a) % 40) * 9; //last number
               cout << degrees << endl;
          }
     }
     
     return 0;
}