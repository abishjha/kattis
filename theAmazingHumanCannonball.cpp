#include<iostream>
#include<cmath>
const double PI = 3.1415926535897;

int main() {
     double initialV, angle, xPos, yPos, h1, h2, time;
     int numOfCases;
     std::cin >> numOfCases;
     bool* output = new bool[numOfCases];

     for (int i = 0; i < numOfCases; i++) {
          output[i] = false;
          std::cin >> initialV >> angle >> xPos >> h1 >> h2;
          time = (xPos / (initialV * cos(angle * PI / 180)));
          yPos = initialV * time * sin(angle * PI / 180) - 0.5 * 9.81 * time * time;
          if (yPos >= (h1 + 1) && yPos < (h2 - 1))
               output[i] = true;
     }
     
     for (int i = 0; i < numOfCases; i++) {
          if (output[i] == true)
               std::cout << "Safe" << std::endl;
          else
               std::cout << "Not Safe" << std::endl;
     }

     delete[] output;
     return 0;
}