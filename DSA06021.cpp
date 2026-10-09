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

        for (int i = 0; i<n; i++){
            if (v[i] == x){
                cout << i+1;
            }
        }
        cout << endl;
    }
}