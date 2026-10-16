#include<bits/stdc++.h>
using namespace std;

int n, a[100], used[100];

void Try(int i){
    for (int j = n; j >= 1; j--){
        if (used[j] == 0){
            a[i] = j;
            used[j] = 1;

            if (i == n){
                for (int i = 1; i <= n; i++){
                    cout << a[i];
                }
                cout << " ";
            }

            else {
                Try(i+1);
            }
            used[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
   

    return 0;
}