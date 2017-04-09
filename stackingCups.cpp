#include<iostream>
#include<string>

int main() {
     int numOfCases;
     std::cin >> numOfCases;
     std::string first[20], second[20];
     int number[20];

     for (int i = 0; i < numOfCases; i++) {
          std::cin >> first[i] >> second[i];

          if (static_cast<int>(first[i][0]) < 58 && static_cast<int>(first[i][0]) >= 48) {
               number[i] = stoi(first[i]) / 2;
               first[i] = second[i];
          }
          else
               number[i] = stoi(second[i]);
     }

     for (int i = 0; i < 1000; i++) {
          for (int j = 0; j < numOfCases; j++) {
               if (number[j] == i)
                    std::cout << first[j] << std::endl;
          }
     }
 
     return 0;
}