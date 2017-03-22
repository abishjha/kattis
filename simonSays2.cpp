#include<iostream>
#include<string>

int main() {
     int numOfCases;
     std::cin >> numOfCases;
     std::string input;
     std::string temp;
     std::string ptr[21];
     std::getline(std::cin, input);

     for (int i = 0; i < numOfCases; i++) {
          std::getline(std::cin, input);
          if (input.length() >= 12) {
               temp = input.substr(0, 10);

               if (temp == "simon says")
                    ptr[i] = input.substr(11, (input.length() - 10)) + "\n";
               else
                    ptr[i] = "\n";
          }
          else
               ptr[i] = "\n";
     }

     for (int i = 0; i < numOfCases; i++)
          std::cout << ptr[i];

     return 0;
}