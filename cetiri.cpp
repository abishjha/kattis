#include<iostream>
#include<algorithm>
using namespace std;

int main() {
     int num[3];
     cin >> num[0] >> num[1] >> num[2];
     sort(num, num+3);

     int difference;
     if (num[1] - num[0] == num[2] - num[1])
          difference = num[1] - num[0];
     else if (num[1] - num[0] < num[2] - num[1])
          difference = num[1] - num[0];
     else if (num[1] - num[0] > num[2] - num[1])
          difference = num[2] - num[1];

     if (num[0] + difference != num[1])
          cout << num[0] + difference << endl;
     else if (num[1] + difference != num[2])
          cout << num[1] + difference << endl;
     else
          cout << num[2] + difference << endl;

     return 0;
}