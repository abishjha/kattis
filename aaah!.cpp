#include<iostream>
#include<string>

int main() {
     std::string input, requirement;
     std::cin >> input;
     std::cin >> requirement;

     if (input.length() >= requirement.length())
          std::cout << "go" << std::endl;
     else
          std::cout << "no" << std::endl;

     return 0;
}