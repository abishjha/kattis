#include<iostream>
#include<algorithm>

int main() {
     int numOfCases;
     std::cin >> numOfCases;
     int* ptr = new int[numOfCases];
     int sum = 0;

     for (int i = 0; i < numOfCases; i++)
          std::cin >> ptr[i];

     std::sort(ptr, ptr + numOfCases);
     std::reverse(ptr, ptr + numOfCases);

     for (int i = 0; i < numOfCases; i++) {
          if (((i + 1) % 3) != 0)
               sum += ptr[i];
     }

     std::cout << sum << std::endl;

     delete[] ptr;
     system("pause");
}