#include<iostream>
using namespace std;

void getFraction(int number, int numerator){
    int low, high, gcd = 1;
    if(number > numerator)
        low = numerator;
    else
        low = number;

    for(int i = 1; i <= low; i++){
        if(numerator%i == 0 && number%i ==0)
            gcd = i;
    }
    cout << numerator/gcd << "/" << number/gcd << endl;
}

int main(){
    int numOfCases;
    cin >> numOfCases;
    int* ptr = new int[numOfCases];

    int first, temp;
    cin >> first;

    for(int i =0; i < numOfCases -1; i++){
        cin >> ptr[i];
    }

    for(int i =0; i < numOfCases -1; i++){
        getFraction(ptr[i], first);
    }

    delete[] ptr;
    return 0;
}
