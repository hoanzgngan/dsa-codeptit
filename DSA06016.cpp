#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while (t--){
        long long n; cin >> n;
        vector<long long> a(n);
        long long m; cin >> m;
        vector<long long> b(m);

        for (int i = 0; i<n; i++){
            cin >> a[i];
        }
        for (int i = 0; i<m; i++){
            cin >> b[i];
        }


        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        cout << a[a.size() - 1] * b[0];
        cout << endl;
    }
}