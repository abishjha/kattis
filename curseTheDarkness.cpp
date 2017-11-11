#include<iostream>
#include<cmath>
using namespace std;

int main() {
     int numOfCases;
     cin >> numOfCases;

     double bookX, bookY, candleX, candleY, distance;
     int numOfCandles;
     bool value;

     for (int i = 0; i < numOfCases; i++) {
          value = false;
          cin >> bookX >> bookY;
          cin >> numOfCandles;
          for (int i = 0; i < numOfCandles; i++) {
               cin >> candleX >> candleY;
               distance = pow((candleX - bookX), 2) + pow((candleY - bookY), 2);
               distance = pow(distance, 0.5);
               distance = abs(distance);
               if (distance <= 8)
                    value = true;
          }
          if (value == true)
               printf("light a candle\n");
          else
               printf("curse the darkness\n");
     }

     return 0;
}