#include<iostream>
using namespace std;

int main(){
     int tempArray[6];
     int temp;

     for (int i = 0; i < 6; i++) {
          cin >> tempArray[i];
     }

     tempArray[0] = 1 - tempArray[0];
     tempArray[1] = 1 - tempArray[1];
     tempArray[2] = 2 - tempArray[2];
     tempArray[3] = 2 - tempArray[3];
     tempArray[4] = 2 - tempArray[4];
     tempArray[5] = 8 - tempArray[5];

     for (int i = 0; i < 6; i++) {
          cout << tempArray[i] << " ";
     }
     cout << endl;

     return 0;
}