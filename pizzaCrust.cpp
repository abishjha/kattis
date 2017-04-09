#include<iostream>
#include<iomanip>

const double PI = 3.1415926535897;

int main() {
     int crust, radius;
     std::cin >> radius >> crust;

     double smallArea, bigArea;
     bigArea = PI * radius * radius;
     smallArea = PI * (radius - crust) * (radius - crust);

     std::cout << std::fixed << std::setprecision(6) << (smallArea / bigArea) * 100 << std::endl;

     return 0;
}