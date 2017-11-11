#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;

const double PI = 3.14159265;

int main(){
  int n, a, d;
  cin >> n;
  double elev = 0.0;
  while(n--){
    cin >> a >> d;
    if(a != 0)
      elev += (d * sin(a * (PI / 180)));
  }
  cout << setprecision(2) << fixed << elev << endl;
  
  return 0;
}