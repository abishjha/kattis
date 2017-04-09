#include<iostream>
#include<string>
#include<iomanip>

int main() {
     int speed, timeInSec = 0;
     std::string input, temp, previous = "";
     double distance = 0;

     while (std::getline(std::cin, input)) {
          if (previous != "") {
               timeInSec = (std::stoi(input.substr(0, 2)) - std::stoi(previous.substr(0, 2))) * 3600;
               timeInSec += (std::stoi(input.substr(3, 2)) - std::stoi(previous.substr(3, 2))) * 60;
               timeInSec += std::stoi(input.substr(6, 2)) - std::stoi(previous.substr(6, 2));
               distance += (timeInSec / (3600 * 1.0)) * speed;
          }
          previous = input;

          if (input.length() > 8)
               speed = std::stoi(input.substr(9, input.length()));
          else
               std::cout << input << " " << std::fixed << std::setprecision(2) << distance << " km" << std::endl;
     }

    return 0;
}

/* alternatively -- use the below solution
#include <stdio.h>

main(){
int hh, mm, ss, speed=0, newspeed, i, j, k, n, time = 0, now;
char buf[10000];
double dist = 0;

while (gets(buf)) {
n = sscanf(buf,"%d:%d:%d %d",&hh,&mm,&ss,&newspeed);
now = hh*3600 + mm*60 + ss;
dist += (now - time) / 3600. * speed;
time = now;
if (n == 3) printf("%02d:%02d:%02d %0.2lf km\n",hh,mm,ss,dist);
else if (n == 4) speed = newspeed;
else printf("oops!\n");
}
}
*/

