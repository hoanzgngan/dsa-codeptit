#include<bits/stdc++.h>
using namespace std;

//backtracking

int n; 
string s;

void Try(int i){
    if (i == n){ // dieu kien dung
        if (s[n-1] == 'A'){ //ky tu cuoi = A -> dung va in xau
            cout << s << "\n";
        }
        return;
    }

    for (char c : {'A', 'H'}) {
        if (i == 0 && c != 'H') continue; //loai neu nhu ky tu dau != H
        if (i > 0 && s[i-1] == 'H' && c == 'H') continue; // loai neu nhu 2 chu H ke nhau (kiem tra ky tu dung truoc)

        s[i] = c; // gan gia tri char

        Try(i+1); // dequy
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        cin >> n;
        s.resize(n);
        Try(0);
    }

    return 0;
}