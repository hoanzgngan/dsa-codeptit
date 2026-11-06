#include<bits/stdc++.h>
using namespace std;

int MOD = 1000000007;
int nCk(int n, int k){
    if (k == 0 || n == k){
        return 1;
    }
    else return (nCk(n - 1, k) + nCk(n - 1, k - 1)) % MOD; // cong thuc truy hoi
}

int main(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int k; cin >> k;
        if (k < 0 || k > n){
            cout << 0 << "\n";
        }
        else {
            cout << nCk(n, k) << "\n";
        }
    }
}