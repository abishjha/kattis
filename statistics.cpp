#include<iostream>
#include<algorithm>

int main() {
     int numbers[30];
     int count = 0;
     int input;

     while(std::cin >> input) {
          for (int i = 0; i < input; i++)
               std::cin >> numbers[i];
          std::sort(numbers, numbers + input);
          std::cout << "Case " << count + 1 << ": " << numbers[0] << " " << numbers[input - 1] << " " << numbers[input - 1] - numbers[0] << std::endl;
          count++;
     }
     
     return 0;
}