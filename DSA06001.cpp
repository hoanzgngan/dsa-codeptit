#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> v(n);

        for (int i = 0; i<n; i++){
            cin >> v[i];
        }
        
        // 7 1 2 3 4 5 6
        sort(v.begin(), v.end());
        // 1 2 3 4 5 6 7 

        int left = 0;
        int right = n-1;

        while(left <= right){
            cout << v[right] << " ";
            right--;
            
            if (left <= right){
                cout << v[left] << " ";
                left++;
            }    
        }
        
        cout << endl;
    }
}