#include<iostream>
using namespace std;

int main() {
     int w, l, num, fx, fy, rx, ry; //fx - false x, rx - real x
     char dir; int steps;

     while (1) {
          cin >> w >> l;
          if (w == 0 && l == 0) break;
          cin >> num;
          fx = 0, fy = 0, rx = 0, ry = 0;

          for (int i = 0; i < num; i++) {
               cin >> dir >> steps;
               if (dir == 'u') {
                    fy += steps;
                    ry += steps;
                    if (ry >= l) ry = l - 1;
               }
               else if (dir == 'd') {
                    fy -= steps;
                    ry -= steps;
                    if (ry < 0) ry = 0;
               }
               else if (dir == 'r') {
                    fx += steps;
                    rx += steps;
                    if (rx >= w) rx = w - 1;
               }
               else if (dir == 'l') {
                    fx -= steps;
                    rx -= steps;
                    if (rx < 0) rx = 0;
               }
          }

          printf("Robot thinks %d %d\nActually at %d %d\n\n", fx, fy, rx, ry);
     }

     return 0;
}