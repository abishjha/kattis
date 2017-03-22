#include<iostream>
#include<string>
using namespace std;

int main(){
    string input;
    cin >> input;
    int answer = 1;

    for(int i = 0; i < input.length(); i++){
        if(input[i] == 'A'){
            if(answer == 1)
                answer = 2;
            else if(answer == 2)
                answer = 1;
        }
        else if(input[i] == 'B'){
            if(answer == 2)
                answer = 3;
            else if(answer == 3)
                answer = 2;
        }
        else if(input[i] == 'C'){
            if(answer == 1)
                answer = 3;
            else if(answer == 3)
                answer = 1;
        }
    }
    cout << answer;

    return 0;
}
