#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<iomanip>
using namespace std;

int main() {
     string input, word, name;
     double heartrate;
     int num;
     while (getline(cin, input)) {
          name = ""; heartrate = 0.0; num = 0;
          stringstream ss;
          ss.str(input);

          while (ss >> word) {
               if (isdigit(word[0])) {
                    heartrate += stod(word);
                    num++;
               }
               else {
                    name += word;
                    name += " ";
               }
          }
          double answer = (heartrate * 1.0) / double(num);
          string newName = name.substr(0, name.size() - 1);
          cout << fixed << setprecision(6) << answer << " " << newName << endl;
     }

     system("pause");
     return 0;
}