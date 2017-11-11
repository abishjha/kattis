#include<iostream>
#include<string>

int main() {
     bool check = true;
     std::string passcode, phrase;
     std::cin >> passcode >> phrase;

     for (int i = 0; i < phrase.length(); i++) {
          if (passcode[0] == phrase[i])
               passcode = passcode.substr(1, (passcode.length() - 1));
          else {
               for (int j = 1; j < passcode.length(); j++) {
                    if (phrase[i] == passcode[j])
                         check = false;
               }
          }

          if (check == false)
               break;
     }

     if (passcode.length() != 0) check = false;

     if (check == true) std::cout << "PASS" << '\n';
     else std::cout << "FAIL" << '\n';

     return 0;
}