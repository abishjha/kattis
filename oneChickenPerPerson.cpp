#include<iostream>

int main() {
     int people, chicken;
     std::cin >> people >> chicken;

     if (chicken > people) {
          if(chicken - people == 1)
               std::cout << "Dr. Chaz will have " << chicken - people << " piece of chicken left over!\n";
          else
               std::cout << "Dr. Chaz will have " << chicken - people << " pieces of chicken left over!\n";
     }
     else {
          if (people - chicken == 1)
               std::cout << "Dr. Chaz needs " << people - chicken << " more piece of chicken!\n";
          else
               std::cout << "Dr. Chaz needs " << people - chicken << " more pieces of chicken!\n";
     }

     return 0;
}