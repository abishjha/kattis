#include<iostream>
#include<string>

int main() {
     int switches;
     std::cin >> switches;

     switches = switches % 2; //checking to see if switches results in the same sequence or reversed

     std::string input1, input2;
     std::cin >> input1 >> input2;
     bool check = true;

     if (switches == 1) { //numbers are reversed
          for (int i = 0; i < input1.length(); i++) {
               if (input1[i] == '1' && input2[i] == '1')
                    check = false;
               else if (input1[i] == '0' && input2[i] == '0')
                    check = false;
          }
     }
     else if (switches == 0) {
          if (input1 != input2)
               check = false;
     }

     if (check == true)
          std::cout << "Deletion succeeded" << std::endl;
     else
          std::cout << "Deletion failed" << std::endl;
 
     return 0;
}