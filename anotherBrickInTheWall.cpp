#include<iostream>
using namespace std;

//this code is written assuming that there will not be a case where there is not enough bricks to fulfill the dimensional requirement of the wall
int main() {
     int height, width, numOfBricks, sum =0;
     cin >> height >> width >> numOfBricks;
     int* ptr = new int[numOfBricks];
     bool answer = true;
     
     for (int i = 0; i < numOfBricks; i++)
          cin >> ptr[i];

     for (int i = 0; i < numOfBricks; i++) {
          sum += ptr[i];
          if (sum == width) {
               sum = 0;
               height--;
          }
          else if (sum > width) {
               sum = 0;
               answer = false;
               height--;
          }

          if (height <= 0) {
               if (answer == true) {
                    cout << "YES" << endl;
                    return 0;
               }
               else {
                    cout << "NO" << endl;
                    return 0;
               }
          }
     }

     delete[] ptr;

     return 0;
}