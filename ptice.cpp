#include<iostream>
#include<string>
using namespace std;

int adrian(string input, int n) {
     char guess[3] = {'A', 'B', 'C'};
     int count = 0;
     for (int i = 0; i < n; i++) {
          if (guess[i % 3] == input[i])
               count++;
     }
     return count;
}

int bruno(string input, int n) {
     char guess[4] = { 'B', 'A', 'B', 'C' };
     int count = 0;
     for (int i = 0; i < n; i++) {
          if (guess[i % 4] == input[i])
               count++;
     }
     return count;
}

int goran(string input, int n) {
     char guess[6] = { 'C', 'C', 'A', 'A', 'B', 'B' };
     int count = 0;
     for (int i = 0; i < n; i++) {
          if (guess[i % 6] == input[i])
               count++;
     }
     return count;
}

int main() {
     int n;
     cin >> n;
     string answer;
     cin >> answer;

     int a = adrian(answer, n), b = bruno(answer, n), c = goran(answer, n);
     int max = a;
     if (b > max)
          max = b;
     if (c > max)
          max = c;

     cout << max << endl;
     if (a == max)
          cout << "Adrian\n";
     if (b == max)
          cout << "Bruno\n";
     if (c == max)
          cout << "Goran\n";

     system("pause");
     return 0;
}