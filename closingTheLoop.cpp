#include<iostream>
#include<string>
#include<queue>
using namespace std;

int main() {
     int n, ropes = 0;
     string input;
     cin >> n;
     
     for (int i = 0; i < n; i++) {
          priority_queue<int> r;
          priority_queue<int> b;
          int sum = 0;
          cin >> ropes;
          for (int j = 0; j < ropes; j++) {
               cin >> input;
               char a = input[input.length() - 1];
               input = input.substr(0, input.length() - 1);

               if (a == 'R')
                    r.push(stoi(input));
               else if (a == 'B')
                    b.push(stoi(input));
          }

          if (!r.empty() && !b.empty()) {
               while (!r.empty() && !b.empty()) {
                    sum -= 1;
                    sum += r.top() + b.top() - 1;
                    r.pop(); b.pop();
               }

               cout << "Case #" << i + 1 << ": " << sum << endl;
          }
          else
               cout << "Case #" << i + 1 << ": " << 0 << endl;
     }

     return 0;
}