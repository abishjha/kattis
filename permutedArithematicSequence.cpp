#include<iostream>
#include<algorithm>

int main() {
     int numOfCases;
     std::cin >> numOfCases;
     int nums[101];
     int numOfSubCases, difference;
     int* answer = new int[numOfCases];
     bool check = true;

     for (int i = 0; i < numOfCases; i++) {
          check = true;
          std::cin >> numOfSubCases;
          for (int j = 0; j < numOfSubCases; j++)
               std::cin >> nums[j];

          difference = nums[1] - nums[0];
          for (int j = 0; j < (numOfSubCases - 1); j++) {
               if (nums[j + 1] - nums[j] != difference)
                    check = false;
          }
          if (check == true)
               answer[i] = 0;
          else {
               std::sort(nums, nums + numOfSubCases);
               check = true;
               difference = nums[1] - nums[0];
               for (int j = 0; j < (numOfSubCases - 1); j++) {
                    if (nums[j + 1] - nums[j] != difference)
                         check = false;
               }
               if (check == true)
                    answer[i] = 1;
               else
                    answer[i] = 2;
          }
     }

     for (int i = 0; i < numOfCases; i++) {
          if (answer[i] == 0)
               std::cout << "arithmetic" << std::endl;
          else if (answer[i] == 1)
               std::cout << "permuted arithmetic" << std::endl;
          else
               std::cout << "non-arithmetic" << std::endl;
     }

     delete[] answer;
     return 0;
}