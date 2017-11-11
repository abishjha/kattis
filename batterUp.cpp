#include<iostream>
#include<iomanip>

using namespace std;

int main(){
  int n, num, sum = 0, temp;
  cin >> n;
  num = n;
  for(int i = 0; i < num; i++){
    cin >> temp;
    if(temp == -1)
      n--;
    else
      sum += temp;
  }
  cout << setprecision(10) << double(sum /(1.0 * n)) << endl;
  
  return 0;
}

