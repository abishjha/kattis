#include<iostream>
#include<iomanip>
#include<cmath>

int main() {
     double area;
     long double lengthOfFence;
     std::cin >> area;

     lengthOfFence = 4 * sqrt(area);
     std::cout << std::setprecision(12) << std::fixed << lengthOfFence << std::endl;

     return 0;
}