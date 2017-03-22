#include<iostream>
#include<string>

int valueOf(char a) {
     int temp = static_cast<int>(a);
     switch (temp) {
     case 32: 
          return 0;
     case 33:
     case 126:
          return 9;
     case 34:
          return 6;
     case 35:
     case 38:
     case 65:
     case 121:
          return 24;
     case 36:
     case 66:
          return 29;
     case 37:
     case 48:
     case 50:
     case 90:
     case 109:
          return 22;
     case 39:
     case 96:
          return 3;
     case 40:
     case 41:
     case 124:
          return 12;
     case 42:
     case 99:
     case 116:
     case 117:
          return 17;
     case 43:
     case 114:
     case 118:
     case 120:
          return 13;
     case 44:
     case 45:
     case 94:
          return 7;
     case 51:
     case 56:
     case 80:
     case 85:
     case 97:
     case 101:
          return 23;
     case 46:
          return 4;
     case 47:
     case 60:
     case 62:
     case 92:
          return 10;
     case 49:
     case 86:
     case 119:
     case 122:
          return 19;
     case 52:
     case 75:
     case 104:
     case 107:
     case 115:
          return 21;
     case 53:
          return 27;
     case 54:
     case 57:
     case 68:
     case 69:
     case 79:
     case 87:
          return 26;
     case 55:
     case 76:
     case 84:
     case 108:
          return 16;
     case 58:
     case 95:
          return 8;
     case 59:
          return 11;
     case 61:
     case 89:
          return 14;
     case 63:
     case 105:
          return 15;
     case 64:
          return 32;
     case 67:
     case 70:
     case 106:
     case 111:
          return 20;
     case 71:
     case 72:
     case 78:
     case 83:
     case 98:
     case 100:
     case 112:
     case 113:
          return 25;
     case 73:
     case 74:
     case 88:
     case 91:
     case 93:
     case 102:
     case 110:
     case 123:
     case 125:
          return 18;
     case 77:
     case 82:
          return 28;
     case 81:
          return 31;
     case 103:
          return 30;
     }
}

int tonerForLine(std::string line) {
     int sum = 0;
     char temp;
     for (int i = 0; i < line.length(); i++) {
          temp = line[i];
          sum += valueOf(temp);
     }
     return sum;
}

int main() {
     std::string line;

     while(std::getline(std::cin, line))
          std::cout << tonerForLine(line) << std::endl;

     return 0;
}