#include<iostream>
#include<algorithm>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
  long long n, max, keys, alpha, press;
  cin >> n;
  
  vector<long long> usage;
  for(int count = 0; count < n; count++){
    press = 0;
    cin >> max >> keys >> alpha;

    usage.clear(); usage.resize(alpha);
    for(int i = 0; i < alpha; i++)
      scanf("%d", &usage[i]);
  
    sort(usage.begin(), usage.end());
    reverse(usage.begin(), usage.end());
    
    int cnt = 0;
    for(int j = 1; j <= max; j++){
      for(int i = 0; i < keys; i++){
        if(!(cnt >= usage.size()))
          press += j * usage[cnt++];
      }
    }
    
    cout << "Case #" << count+1 << ": " << press << endl;
  }
  
  return 0;
}