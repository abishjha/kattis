#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

char addKeytoChar(int c, int key) {
     int returnValue;

     if (c == 95)
          c = 91;
     else if (c == 46)
          c = 92;

     if (c + key > 92) {
          returnValue = 64 + c + key - 92;
     }
     else
          returnValue = c + key;

     if (returnValue == 91)
          returnValue = 95;
     else if (returnValue == 92)
          returnValue = 46;

     return static_cast<char>(returnValue);
}

int main() {
     int key, temp;
     string message;
     string outputArray[30];
     stringstream ss;

     for (int i = 0; i < 30; i++) {
               cin >> key;
               if (key == 0) {
                    temp = i;
                    i = 30;
               }
               else {
                    cin >> message;
                    reverse(message.begin(), message.end());

                    ss.str("");
                    ss.clear();

                    for (int i = 0; i < message.length(); i++) {
                         temp = static_cast<int>(message[i]);
                         ss << addKeytoChar(temp, key);
                    }
                    outputArray[i] = ss.str();
               }
     }
     for (int j = 0; j < temp; j++) {
          cout << outputArray[j] << endl;
     }

     return 0;
}