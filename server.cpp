#include<iostream>
using namespace std;

int main() {
     int n, t, sum = 0, a, ans = 0;
     cin >> n >> t;

     for (int i = 0; i < n; i++) {
          cin >> a;
          sum += a;
          if (sum <= t)
               ans++;
          else
               break;
     }
     cout << ans << endl;

     return 0;
}