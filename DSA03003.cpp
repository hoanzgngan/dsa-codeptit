#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long res = 0;
        long long MOD = 1e9 + 7;
        for (int i = 0; i < n; i++){
            res = (res + (long long)v[i] * i) % MOD;
        }

        cout << res << "\n";

    }
}