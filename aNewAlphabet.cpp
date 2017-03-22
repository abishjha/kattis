#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string converter(string input) {
     char a = input[0];
     switch (a) {
     case 'a': 
     case 'A':
          return "@";
     case 'b': 
     case 'B':
          return "8";
     case 'c':
     case 'C':
          return "(";
     case 'd':
     case 'D':
          return "|)";
     case 'e':
     case 'E':
          return "3";
     case 'f':
     case 'F':
          return "#";
     case 'g':
     case 'G':
          return "6";
     case 'h':
     case 'H':
          return "[-]";
     case 'i':
     case 'I':
          return "|";
     case 'j':
     case 'J':
          return "_|";
     case 'k':
     case 'K':
          return "|<";
     case 'l':
     case 'L':
          return "1";
     case 'm':
     case 'M':
          return "[]\\/[]";
     case 'n':
     case 'N':
          return "[]\\[]";
     case 'o':
     case 'O':
          return "0";
     case 'p':
     case 'P':
          return "|D";
     case 'q':
     case 'Q':
          return "(,)";
     case 'r':
     case 'R':
          return "|Z";
     case 's':
     case 'S':
          return "$";
     case 't':
     case 'T':
          return "']['";
     case 'u':
     case 'U':
          return "|_|";
     case 'v':
     case 'V':
          return "\\/";
     case 'w':
     case 'W':
          return "\\/\\/";
     case 'x':
     case 'X':
          return "}{";
     case 'y':
     case 'Y':
          return "`/";
     case 'z':
     case 'Z':
          return "2";
     default:
          return input;
     }
}

int main() {
     string input, temp;
     stringstream ss;
     getline(cin, input);

     for (int i = 0; i < input.length(); i++) {
          temp = input[i];
          ss << converter(temp);
     }
     cout << ss.str() << endl;

     return 0;
}