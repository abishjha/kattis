#include<iostream>
#include<string>
#include<bitset>

int main() {
     std::string input;
     int sum1, sum0;

     while (std::getline(std::cin, input)) {
          sum1 = 0; sum0 = 0;
          for (int i = 0; i < input.length(); i++) {
               std::string binary = std::bitset<7>(input[i]).to_string();
               for (int j = 0; j < 7; j++) {
                    if (binary[j] == '1')
                         sum1++;
                    else
                         sum0++;
               }
          }

          if (sum1 % 2 == 0 && sum0 % 2 == 0)
               std::cout << "free \n";
          else
               std::cout << "trapped \n";
     }
 
     return 0;
}