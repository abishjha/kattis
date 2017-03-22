#include<iostream>
using namespace std;

int main(){
    int one, two, three;
    cin >> one >> two >> three;

    if(one + two == three)
        cout << one << "+" << two << "=" << three << endl;
    else if(one == two + three)
        cout << one << "=" << two << "+" << three << endl;
    else if(one / two == three)
        cout << one << "/" << two << "=" << three << endl;
    else if(one == two / three)
        cout << one << "=" << two << "/" << three << endl;
    else if(one - two == three)
        cout << one << "-" << two << "=" << three << endl;
    else if(one == two - three)
        cout << one << "=" << two << "-" << three << endl;
    else if(one * two == three)
        cout << one << "*" << two << "=" << three << endl;
    else if(one == two * three)
        cout << one << "=" << two << "*" << three << endl;

    return 0;
}
