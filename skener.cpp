#include<iostream>
#include<string>

int main() {
     int row, column, rowMult, colMult;
     std::cin >> row >> column >> rowMult >> colMult;

     std::string input[50];

     for (int i = 0; i < row; i++)
          std::cin >> input[i];

     std::string temp;
     for (int i = 0; i < row; i++) {
          temp = input[i];
          for (int j = 0; j < rowMult; j++) {
               for (int k = 0; k < temp.length(); k++) {
                    for (int l = 0; l < colMult; l++) {
                         std::cout << temp[k];
                    }
               }
               std::cout << std::endl;
          }
     }
 
     return 0;
}