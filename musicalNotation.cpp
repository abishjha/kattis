#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string printLineSpace(int numOfNotes, string note[], char value) {
     string temp;
     stringstream result;

     for (int i = 0; i < numOfNotes; i++) {
          temp = note[i];
          if (temp[0] == value) {
               if ((static_cast<int>(temp[1]) - static_cast<int>('0')) > 0) {
                    for (int i = 0; i < (static_cast<int>(temp[1]) - static_cast<int>('0')); i++)
                         result << '*';
                    result << ' ';
               }
               else
                    result << "* ";
          }
          else {
               if ((static_cast<int>(temp[1]) - static_cast<int>('0')) > 0) {
                    for (int i = 0; i < (static_cast<int>(temp[1]) - static_cast<int>('0')); i++)
                         result << ' ';
                    result << ' ';
               }
               else
                    result << "  ";
          }
     }
     temp = result.str();
     temp = temp.substr(0, temp.length() - 1);
     return temp;
}

string printLineDash(int numOfNotes, string note[], char value) {
     string temp;
     stringstream result;

     for (int i = 0; i < numOfNotes; i++) {
          temp = note[i];
          if (temp[0] == value) {
               if ((static_cast<int>(temp[1]) - static_cast<int>('0')) > 0) {
                    for (int i = 0; i < (static_cast<int>(temp[1]) - static_cast<int>('0')); i++)
                         result << '*';
                    result << '-';
               }
               else
                    result << "*-";
          }
          else {
               if ((static_cast<int>(temp[1]) - static_cast<int>('0')) > 0) {
                    for (int i = 0; i < (static_cast<int>(temp[1]) - static_cast<int>('0')); i++)
                         result << '-';
                    result << '-';
               }
               else
                    result << "--";
          }
     }
     temp = result.str();
     temp = temp.substr(0, temp.length() - 1);
     return temp;
}

int main() {
     int numOfNotes;
     cin >> numOfNotes;
     string* note = new string[numOfNotes];

     for (int i = 0; i < numOfNotes; i++)
          cin >> note[i];

     cout << "G: " << printLineSpace(numOfNotes, note, 'G') << endl;
     cout << "F: " << printLineDash(numOfNotes, note, 'F') << endl;
     cout << "E: " << printLineSpace(numOfNotes, note, 'E') << endl;
     cout << "D: " << printLineDash(numOfNotes, note, 'D') << endl;
     cout << "C: " << printLineSpace(numOfNotes, note, 'C') << endl;
     cout << "B: " << printLineDash(numOfNotes, note, 'B') << endl;
     cout << "A: " << printLineSpace(numOfNotes, note, 'A') << endl;
     cout << "g: " << printLineDash(numOfNotes, note, 'g') << endl;
     cout << "f: " << printLineSpace(numOfNotes, note, 'f') << endl;
     cout << "e: " << printLineDash(numOfNotes, note, 'e') << endl;
     cout << "d: " << printLineSpace(numOfNotes, note, 'd') << endl;
     cout << "c: " << printLineSpace(numOfNotes, note, 'c') << endl;
     cout << "b: " << printLineSpace(numOfNotes, note, 'b') << endl;
     cout << "a: " << printLineDash(numOfNotes, note, 'a') << endl;

     delete[] note;
     return 0;
}