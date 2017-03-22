#include<iostream>
using namespace std;

int main(){
    int hour, minute;
    cin >> hour >> minute;
    const int timeToDeduct = 45;

    if(minute < timeToDeduct){
        if((hour -1) < 0)
            hour = hour + 23;
        else
            hour--;

        if(minute - timeToDeduct < 0)
            minute = minute - timeToDeduct + 60;
        else
            minute -= timeToDeduct;
    }
    else{
        if(minute - timeToDeduct < 0)
            minute = minute - timeToDeduct + 60;
        else
            minute -= timeToDeduct;
    }

    cout << hour << " " << minute << endl;

    return 0;
}
