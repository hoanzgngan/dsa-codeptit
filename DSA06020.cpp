#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int x; cin >> x;

        vector<int> v(n);
        for (int i = 0; i<n; i++){
            cin >> v[i];
        }

        bool ans = false;
        for (int i = 0; i<n; i++){
            if (v[i] == x){
                cout << "1";
                ans = true;
                break;
            }    
        }

        if (ans == false){
            cout << "-1";
        }
        cout << endl;
    }
}