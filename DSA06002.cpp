#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        int x; cin >> x;

        vector<int> a(n);

        for (int i = 0; i<n; i++){
            cin >> a[i];
        }

        vector<pair<int, int>> ans; // vector cặp ánh xạ 
                                    
        
        for (int i = 0; i<n; i++){
            ans.push_back({abs(x - a[i]), i}); // trùng abs -> vị trí xuất hiện trước sẽ in trước
        }

        sort(ans.begin(), ans.end());

        for (auto z : ans){
            cout << a[z.second] << " ";
        }

        cout << endl;
        
    }

    return 0;
}

// 2 2 3  4 5
// 5 9 10 3 2

// 0 1 2 3 4

