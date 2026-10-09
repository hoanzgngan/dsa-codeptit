#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0 ; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        
        vector<int> ans;

        int res;
        for (int i = 1; i<n; i++){
            res = abs(v[i] - v[i-1]);
            ans.push_back(res);
        }

        sort(ans.begin(), ans.end());

        cout << ans[0];
        cout << endl;
        

    }


    return 0;
}