#include<bits/stdc++.h>
using namespace std;

int n, x[100], cot[100], d1[100], d2[100];
int cnt = 0;

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (cot[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1){
            x[i] = j;
            cot[j] = d1[i-j+n] = d2[i+j-1] = 0;
            if (i == n){
                cnt++;
            }
            else {
                Try(i+1);
            }
            cot[j] = d1[i-j+n] = d2[i+j-1] = 0; //backtrack tra gia tri
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        for (int i = 1; i <= 99; i++){
            cot[i] = d1[i] = d2[i] = 1;
        }
        Try(1);
        cout << cnt << "\n";
    }

    return 0;
}