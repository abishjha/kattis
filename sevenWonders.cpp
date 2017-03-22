#include<iostream>
#include<string>
using namespace std;

int main(){
    int tablet = 0, compass = 0, gear = 0;
    int extraPoints = 0;
    string input;
    cin >> input;
    for(int i =0; i< input.length(); i++){
        if(input[i] == 'T')
            tablet++;
        else if (input[i] == 'C')
            compass++;
        else if (input[i] == 'G')
            gear++;
    }
    int sum = tablet*tablet + compass*compass + gear*gear;
    int counter = tablet;
    for(int i = 0; i < counter; i++){
        if(tablet-1 >= 0 && gear-1 >= 0 && compass-1 >= 0){
            extraPoints += 7;
            tablet -= 1;
            gear -= 1;
            compass -= 1;
        }
    }
    cout << sum + extraPoints << endl;

    return 0;
}
