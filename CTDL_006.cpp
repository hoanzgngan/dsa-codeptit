#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

        vector<int> v(n);
        for (int i = 0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        vector<int> v2;
        v2.push_back(v[0]);

        for (int i = 1; i<n; i++){
            if (v[i] != v[i-1]){
                v2.push_back(v[i]);
            }
        }

        sort(v2.begin(), v2.end());

        for (int x : v2){
            cout << x << " ";
        }
        
    // 12
    // 1 1 1 4 5 1 4 7 7 8 1 9
        
    
}