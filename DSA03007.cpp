#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end(), greater<int>());
        sort(b.begin(), b.end());

        vector<int> r(n);

        for (int i = 0; i < n; i++){
            r[i] = a[i] * b[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; i++){
            sum = sum + r[i];
        }

        cout << sum << "\n";

    }
}