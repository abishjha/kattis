#include<iostream>
#include<string>
#include<map>
#include<sstream>

int main() {
     std::map<std::string, std::string> wordList;
     std::string word, meaning, line;

     while (std::getline(std::cin, line) && line != "") {
          std::stringstream s(line);
          s >> word;
          s >> meaning;
          wordList[meaning] = word;
     }

     while (std::cin >> meaning) {
          if (wordList.count(meaning))
               std::cout << wordList[meaning] << std::endl;
          else
               std::cout << "eh" << std::endl;
     }

     return 0;
}