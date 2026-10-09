#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;

    vector<int> v(n);
    vector<int> v2(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i = 0; i < n; i++){
        v2[i] = abs(v[i]);
    }

    for (int i = 0; i < n; i++){
        ans[i] = v[i] + v2[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + ans[i];
    }

    cout << sum << "\n";

}