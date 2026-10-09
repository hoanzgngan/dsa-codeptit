#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int cnt = 1;
        int maxCnt = 1;
        int ans = v[0];

        for(int i = 1; i < n; i++){
            if(v[i] == v[i - 1]){
                cnt++;
            }
            else{
                cnt = 1;
            }

            if(cnt > maxCnt){
                maxCnt = cnt;
                ans = v[i];
            }
        }

        if(maxCnt > n/2){
            cout << ans << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}