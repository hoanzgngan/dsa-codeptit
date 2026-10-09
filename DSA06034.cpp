#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    
    while (t--){
        int n, k; cin >> n >> k;
        vector<int> v(n);

        for (int i = 0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int count = 0;
        int left = 0;
        int right = n-1; 
        for (int i = 0; i<n; i++){
            while(left < right){
                int sum = v[left] + v[right];
                if (sum == k){
                    count++;
                    left++;
                    right--;
                }
                
                
            }
        }

        cout << count << " ";
        cout << endl;
    }
}