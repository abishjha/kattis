#include<iostream>
#include<string>
using namespace std;

bool check(string input) {
     for (int i = 0; i < input.size(); i += 3) {
          for (int j = i + 3; j < input.size(); j += 3) {
               if (input.substr(i, 3) == input.substr(j, 3))
                    return false;
          }
     }
     return true;
}

int main() {
     string input;
     cin >> input;

     int p = 13, k = 13, h = 13, t = 13;
     if (check(input)) {
          for (int i = 0; i < input.size(); i += 3) {
               switch (input[i]) {
               case 'P': p--;
                    break;
               case 'K': k--;
                    break;
               case 'H': h--;
                    break;
               case 'T': t--;
                    break;
               }
          }
          printf("%d %d %d %d\n", p, k, h, t);
     }
     else {
          printf("GRESKA\n");
     }

     return 0;
}