#include<iostream>

int main() {
     int numOfCases;
     std::cin >> numOfCases;
     int input;
     int* result = new int[numOfCases];

     for (int i = 0; i < numOfCases; i++) {
          std::cin >> input;
          result[i] = input / 400;
          if (input % 400 != 0)
               result[i]++;
     }

     for (int i = 0; i < numOfCases; i++)
          std::cout << result[i] << std::endl;

     delete[] result;

     return 0;
}