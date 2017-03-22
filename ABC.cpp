#include<iostream>
#include<string>
#include<algorithm>

int main() {
     int nums[3];
     std::cin >> nums[0] >> nums[1] >> nums[2];
     std::string input;
     std::cin >> input;

     std::sort(nums, nums + 3);

     for (int i = 0; i < 3; i++) {
          if (input[i] == 'A')
               std::cout << nums[0] << " ";
          else if (input[i] == 'B')
               std::cout << nums[1] << " ";
          else if (input[i] == 'C')
               std::cout << nums[2] << " ";
     }
     std::cout << std::endl;

     system("pause");
}