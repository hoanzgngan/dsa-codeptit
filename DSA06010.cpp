#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--){
        int n; cin >>n;

        set<int> s;

        for (int i = 0; i<n; i++){
            string x; cin >> x;

            for (char c : x){
                s.insert(c - '0'); // doi ky tu thanh so
            }
        }

        for (int x : s){
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}