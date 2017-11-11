#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

string toCode(char c) {
    switch(c){
          case 'A': return ".-";
          case 'B': return "-...";
          case 'C': return "-.-.";
          case 'D': return "-..";
          case 'E': return ".";
          case 'F': return "..-.";
          case 'G': return "--.";
          case 'H': return "....";
          case 'I': return "..";
          case 'J': return ".---";
          case 'K': return "-.-";
          case 'L': return ".-..";
          case 'M': return "--";
          case 'N': return "-.";
          case 'O': return "---";
          case 'P': return ".--.";
          case 'Q': return "--.-";
          case 'R': return ".-.";
          case 'S': return "...";
          case 'T': return "-";
          case 'U': return "..-";
          case 'V': return "...-";
          case 'W': return ".--";
          case 'X': return "-..-";
          case 'Y': return "-.--";
          case 'Z': return "--..";
          case '_': return "..--";
          case ',': return ".-.-";
          case '.': return "---.";
          case '?': return "----";
    }
}

char toOriginal(string c) {
     if(c == ".-") return 'A';
     else if(c == "-...") return 'B';
     else if(c == "-.-.") return 'C';
     else if(c == "-..") return 'D';
     else if(c == ".") return 'E';
     else if(c == "..-.") return 'F';
     else if(c == "--.") return 'G';
     else if(c == "....") return 'H';
     else if(c == "..") return 'I';
     else if(c == ".---") return 'J';
     else if(c == "-.-") return 'K';
     else if(c == ".-..") return 'L';
     else if(c == "--") return 'M';
     else if(c == "-.") return 'N';
     else if(c == "---") return 'O';
     else if(c == ".--.") return 'P';
     else if(c == "--.-") return 'Q';
     else if(c == ".-.") return 'R';
     else if(c == "...") return 'S';
     else if(c == "-") return 'T';
     else if(c == "..-") return 'U';
     else if(c == "...-") return 'V';
     else if(c == ".--") return 'W';
     else if(c == "-..-") return 'X';
     else if(c == "-.--") return 'Y';
     else if(c == "--..") return 'Z';
     else if(c == "..--") return '_';
     else if(c == ".-.-") return ',';
     else if(c == "---.") return '.';
     else if(c == "----") return '?';
}

void convertTo(string input) {
     stringstream code;
     code.str(string());
     int * length = new int[input.length()];
     string temp;

     for (int i = 0; i < input.length(); i++) {
          temp = toCode(input[i]);
          length[i] = temp.length();
          code << temp;
     }

     reverse(length, length + input.length());

     temp = code.str();
     code.str(string());
     int a = 0;
     for(int i = 0; i < input.length(); i++){
        code << toOriginal(temp.substr(a, length[i]));
        a += length[i];
     }

     cout << code.str() << endl;
     delete[] length;
}

int main() {
     string input;
     while (getline(cin, input))
          convertTo(input);

     return 0;
}
