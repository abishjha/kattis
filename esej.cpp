#include<iostream>
#include<algorithm>
#include<string>
#include<cstdio>
#include<ctime>
#include<sstream>
#include<map>
using namespace std;

int main() {
     map<int, char> map_digit;
     int i = 1, words, digits, character;
     for (char c = 'a'; i <= 26; ++c, ++i)
          map_digit[i] = c;

     srand(time(NULL));
     stringstream ss;
     string word;

     int l_a, l_b; // a -- lower word limit. b -- upper word limit.
     cin >> l_a >> l_b;

     //words to be generated
     if (l_a != l_b)
          words = rand() % (l_b - l_a) + l_a;
     else
          words = l_a;

     while (words--) {
          digits = rand() % 15 + 1; //digits to be in the word
          word = "";
          while (digits--) {
               character = rand() % 26 + 1; //number to be chosen from the enum
               word += map_digit[character];
          }
          ss << word << " ";
     }
     cout << ss.str() << endl;

     return 0;
}