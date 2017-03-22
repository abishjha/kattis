#include<iostream>
using namespace std;

int main(){
    int n, m;
    int big, small;
    cin >> n >> m;

    if(n>m){
        big = n;
        small = m;
    }
    else if (m>n){
        big = m;
        small = n;
    }
    else {
        big = m;
        small = m;
    }

    for(int i = (small +1); i <= (big + 1); i++)
        cout << i << endl;

    return 0;
}
