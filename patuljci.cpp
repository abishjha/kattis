#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int input[9], sum = 0;
  for(int i = 0; i < 9; i++){
    cin >> input[i];
    sum += input[i];
  }
  
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 9; j++){
      if(i == j)
        continue;
      if(sum - input[i] - input[j] == 100){
        for(int k = 0; k < 9; k++){
          if(!(k == i || k == j))
            printf("%d\n", input[k]);
        }
        return 0;
      }
    }
  }
  
  return 0;
}