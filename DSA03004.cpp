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

        long long n1 = 0;
        long long n2 = 0;
        for (int i = 0; i < n; i++){
            if (i % 2 == 0){
                n1 = n1 * 10 + v[i];
            }
            else {n2 = n2 * 10 + v[i];}
        }

        cout << n1 + n2 << "\n";
         
    }
}