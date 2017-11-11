#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    string word;
    vector<string> line;
    while(cin >> word)
        line.push_back(word);
        
    for(string temp : line){
        if(count(line.begin(), line.end(), temp) != 1){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;
    return 0;
}