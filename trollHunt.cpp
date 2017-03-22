#include<iostream>

int main() {
     int bridges, knights, perGroup, days = 0;
     std::cin >> bridges >> knights >> perGroup;

     bridges -= 1;
     int groups = knights / perGroup;

     do {
          bridges = bridges - groups;
          days++;
     } while (bridges > 0);

     std::cout << days << std::endl;

     return 0;
}