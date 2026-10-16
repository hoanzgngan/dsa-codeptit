#include<bits/stdc++.h>
using namespace std;

int n, k;
int a[20];

void Try(int i) {
    for (int j = a[i-1] + 1; j <= n; j++){
        a[i] = j;

        if (i == k){
            for (int x = 1; x <= k; x++){
                cout << a[x];
            }
            cout << " ";
        }
        else {
            Try(i+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        cin >> n;
        cin >> k;

        a[0] = 0;
        Try(1);

        cout << '\n';
    }

    return 0;
}