#include<iostream>
#include<cmath>

int main() {
     int number, width, height, temp;
     double maxLength = 0;
     std::cin >> number >> width >> height;

     maxLength = width * width + height * height;
     maxLength = sqrt(maxLength);

     int * result = new int[number];

     for (int i = 0; i < number; i++) {
          std::cin >> temp;
          if (temp <= maxLength)
               result[i] = 1;
          else
               result[i] = 0;
     }

     for (int i = 0; i < number; i++) {
          if (result[i] == 1)
               std::cout << "DA\n";
          else
               std::cout << "NE\n";
     }

     delete[] result;
     return 0;
}