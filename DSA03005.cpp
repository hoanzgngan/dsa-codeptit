#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int k; cin >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        k = min(k, n-k); //biến k lúc này chắc chắn là kích thước của mảng ngắn hơn 
        //buộc phải chọn ít phần tử nhất có thể

        vector<int> a;
        for (int i = 0; i < k; i++){
            a.push_back(v[i]);
        }

        vector<int> b;
        for (int i = k; i < n; i++){
            b.push_back(v[i]);
        }

        long long sumA = 0;
        for (int x : a){
            sumA += x;
        }
        long long sumB = 0;
        for (int x : b){
            sumB += x;
        }

        cout << sumB - sumA << "\n";
        

    }
}