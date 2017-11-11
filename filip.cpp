#include<iostream>

int reverse(int number) {
     int reversedNum = 0, rem;
     while (number != 0) {
          rem = number % 10;
          reversedNum = reversedNum * 10 + rem;
          number /= 10;
     }

     return reversedNum;
}

int main() {
     int num1, num2;
     std::cin >> num1 >> num2;

     num1 = reverse(num1);
     num2 = reverse(num2);

     if (num1 > num2) std::cout << num1 << '\n';
     else  std::cout << num2 << '\n';

     return 0;
}