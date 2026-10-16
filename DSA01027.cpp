#include<bits/stdc++.h>
using namespace std;

int n, a[100], b[100], used[100];

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (used[j] == 0){
            a[i] = b[j];
            used[j] = 1;
            
            if (i == n){
                for (int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
            cout << "\n";
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
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }
    sort(b+1, b+n+1);

    Try(1);
    return 0;
}

