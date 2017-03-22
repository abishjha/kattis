#include<iostream>
#include<string>
#include<iomanip>

int main() {
     std::string input;
     std::cin >> input;
     int whitespace = 0, lowercase = 0, uppercase = 0, symbol = 0;
    // double whitespaceR, lowercaseR, uppercaseR, symbolR;

     for (int i = 0; i < input.length(); i++) {
          if (static_cast<int>(input[i]) == 95)
               whitespace++;
          else if (static_cast<int>(input[i]) >= 65 && static_cast<int>(input[i]) <= 90)
               uppercase++;
          else if (static_cast<int>(input[i]) >= 97 && static_cast<int>(input[i]) <= 122)
               lowercase++;
          else
               symbol++;
     }

     std::cout << std::setprecision(10) << std::fixed << (1.0 * whitespace) / input.length() << std::endl;
     std::cout << std::setprecision(10) << std::fixed << (1.0 * lowercase) / input.length() << std::endl;
     std::cout << std::setprecision(10) << std::fixed << (1.0 * uppercase) / input.length() << std::endl;
     std::cout << std::setprecision(10) << std::fixed << (1.0 * symbol) / input.length() << std::endl;

     return 0;
}