#include<iostream>
#include<algorithm>

int main() {
     int box1[3];
     int box2[3];
     int input[6];
     int box1H, box2H;

     std::cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5] >> box1H >> box2H;

     do {
          std::next_permutation(input, input + 6);
     } while (input[0] + input[1] + input[2] != box1H);

     box1[0] = input[0];
     box1[1] = input[1];
     box1[2] = input[2];
     box2[0] = input[3];
     box2[1] = input[4];
     box2[2] = input[5];

     std::sort(box1, box1 + 3);
     std::sort(box2, box2 + 3);

     std::cout << box1[2] << " " << box1[1] << " " << box1[0] << " " << box2[2] << " " << box2[1] << " " << box2[0] << std::endl;

     return 0;
}