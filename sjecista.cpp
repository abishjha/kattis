#include<iostream>
using namespace std;

int main(){
    int numOfVertices;
    cin >> numOfVertices;
    int answer;

    if(numOfVertices == 3)
        cout << 0 << endl;
    else{
		answer = numOfVertices * (numOfVertices - 1) * (numOfVertices - 2) * (numOfVertices - 3);
		answer /= 24;
		cout << answer << endl;
    }

    return 0;
}

