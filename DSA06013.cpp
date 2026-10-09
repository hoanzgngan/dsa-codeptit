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

        sort(v.begin(), v.end());

        int cnt = 0;
    
        for (int i = 0; i<n; i++){
            if (v[i] == x){
            cnt++;
            }
        }
        
        if (cnt == 0){
            cout << "-1" << endl;
        } else cout << cnt;
        cout << endl;


    }
    return 0;
}
