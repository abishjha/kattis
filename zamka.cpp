#include<iostream>
using namespace std;

int main(){
    int low, high, sum, temp, tempSum = 0;
    int digits[5];
    int counter = 0;
    int answers[1000] = {0};
    int ansCounter = 0;

    cin >> low;
    cin >> high;
    cin >> sum;

    for(int i = low; i <= high; i++){
        temp = i;
        counter = 0;
        tempSum = 0;
        while(temp > 0){
            digits[counter] = temp %10;
            temp = temp / 10;
            counter++;
        }

        for(int j = 0; j < counter; j++){
            tempSum += digits[j];
        }

        if(tempSum == sum){
            answers[ansCounter] = i;
            ansCounter++;
        }
    }
    cout << answers[0] << endl;
    cout << answers[ansCounter -1] << endl;

    return 0;
}
