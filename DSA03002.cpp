#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;

    string minA = a;
    string minB = b;
    string maxA = a;
    string maxB = b;
    
    //min
    for (char &c : minA){
        if (c == '6'){
            c = '5';
        }
    }
    for (char &c : minB){
        if (c == '6'){
            c = '5';
        }
    }

    //max
    for (char &c : maxA){
        if (c == '5'){
            c = '6';
        }
    }

    for (char &c : maxB){
        if (c == '5'){
            c = '6';
        }
    }

    cout << stoi(minA) + stoi(minB) << " "; cout << stoi(maxA) + stoi(maxB);  
    
    return 0;
}
