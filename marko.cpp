#include<iostream>
#include<string>
#include<sstream>

std::string converter(std::string input) {
     char c;
     std::stringstream ss;
     for (int i = 0; i < input.length(); i++) {
          c = input[i];
          if (c == 'a' || c == 'b' || c == 'c')
               ss << 2;
          else if (c == 'd' || c == 'e' || c == 'f')
               ss << 3;
          else if (c == 'g' || c == 'h' || c == 'i')
               ss << 4;
          else if (c == 'j' || c == 'k' || c == 'l')
               ss << 5;
          else if (c == 'm' || c == 'n' || c == 'o')
               ss << 6;
          else if (c == 'p' || c == 'q' || c == 'r' || c == 's')
               ss << 7;
          else if (c == 't' || c == 'u' || c == 'v')
               ss << 8;
          else if (c == 'w' || c == 'x' || c == 'y' || c == 'z')
               ss << 9;
          else
               ss << -1;
     }
     return ss.str();
}

int main() {
     int numOfWords, count = 0;
     std::cin >> numOfWords;
     std::string* words = new std::string[numOfWords];
     
     for (int i = 0; i < numOfWords; i++)
          std::cin >> words[i];

     std::string inputStr, toNumbers;
     std::cin >> inputStr;   

     for (int i = 0; i < numOfWords; i++) {
          toNumbers = converter(words[i]);
          if (inputStr == toNumbers) {
               count++;
          }
     }

     std::cout << count << std::endl;

     return 0;
}