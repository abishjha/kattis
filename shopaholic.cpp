#include<iostream>
#include<algorithm>

int main() {
     long long num;
     std::cin >> num;
     long long * input = new long long[num];

     for (int i = 0; i < num; i++)
          std::cin >> input[i];

     std::sort(input, input + num);
     std::reverse(input, input + num);

     long long sum = 0;
     for (int i = 2; i < num; i += 3)
          sum += input[i];

     std::cout << sum << std::endl;

     delete[] input;
     return 0;
}