#include<iostream>
#include<algorithm>
#include<vector>

int main() {
     int numOfCases;
     std::cin >> numOfCases;

     long long temp;

     int numOfElements;
     for (int i = 0; i < numOfCases; i++) {
          std::cin >> numOfElements;
          std::vector<long long> set1;
          std::vector<long long> set2;

          for (int j = 0; j < numOfElements; j++) {
               std::cin >> temp;
               set1.push_back(temp);
          }
          for (int j = 0; j < numOfElements; j++) {
               std::cin >> temp;
               set2.push_back(temp);
          }

          std::sort(set1.begin(), set1.end());

          std::sort(set2.begin(), set2.end());
          std::reverse(set2.begin(), set2.end());

          temp = 0;
          for (int j = 0; j < numOfElements; j++)
               temp += (set1[j] * set2[j]);

          std::cout << "Case #" << i + 1 << ": " << temp << std::endl;
     }

     return 0;
}