#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int m; cin >> m;

        vector<int> a(n);
        vector<int> b(m);

        for (int i = 0; i<n; i++){
            cin >> a[i];
        }
        for (int i = 0; i<m; i++){
            cin >> b[i];
        }

        a.insert(a.end(), b.begin(), b.end());

        sort(a.begin(), a.end());

        for (int x : a){
            cout << x << " ";
        }

        cout << endl;
    }

    return 0;
}