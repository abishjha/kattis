#include<iostream>
#include<string>

int rule1(std::string input, bool status){
    //When you leave, always leave the seat up
    int count = 0;
    if(status == 0 && input[0] == 'U')
        count++;
    if(status == 1 && input[0] == 'D')
        count += 2;
    if(status == 0 && input[0]== 'D')
        count++;

    for(int i = 1; i < input.length(); i++){
        if(input[i] == 'D')
            count += 2;
    }

    return count;
}

int rule2(std::string input, bool status){
    //When you leave, always leave the seat down
    int count = 0;
    if(status == 0 && input[0] == 'U')
        count += 2;
    if(status == 1 && input[0] == 'D')
        count++;
    if(status == 1 && input[0]== 'U')
        count++;

    for(int i = 1; i < input.length(); i++){
        if(input[i] == 'U')
            count += 2;
    }

    return count;
}

int rule3(std::string input, bool status){
    //When you leave, always leave the seat as you would like to find it
    int count = 0;
    if(status == 0 && input[0] == 'U'){
        status = 1;
        count++;
    }
    else if(status == 1 && input[0] == 'D'){
        status = 0;
        count++;
    }

    for(int i = 1; i < input.length(); i++){
        if(input[i] == 'U' && status == 0){
            status = 1;
            count++;
        }
        else if(input[i] == 'D' && status == 1){
            status = 0;
            count++;
        }
    }

    return count;
}

int main(){
    bool seatStat = 0;
    std::string input;
    std::cin >> input;

    if(input[0] == 'U')
        seatStat = 1;

    input = input.substr(1, input.length());
    std::cout << rule1(input, seatStat) << std::endl;
    std::cout << rule2(input, seatStat) << std::endl;
    std::cout << rule3(input, seatStat) << std::endl;

    return 0;
}
