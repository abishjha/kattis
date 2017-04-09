#include<iostream>

int main() {
     int perMonth, sum = 0;
     std::cin >> perMonth;
     int totalNum, temp;
     std::cin >> totalNum;

     for (int i = 0; i < totalNum; i++) {
          std::cin >> temp;
          sum += perMonth - temp;
     }

     std::cout << sum + perMonth << std::endl;

     return 0;
}