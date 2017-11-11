#include<iostream>
#include<cstring>
using namespace std;

int main() {
     char input[1000000];
     char output[1000000];
     cin >> input;
     int n = strlen(input);
     int j = 0;

     for (int i = 0; i < n; i++) {
          if (input[i] == '<') {
               if (j > 0)
                    j--;
          }
          else {
               output[j] = input[i];
               j++;
          }
     }
     output[j] = '\0';
     printf("%s\n", output);
     return 0;
}