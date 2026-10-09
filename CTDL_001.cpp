#include <bits/stdc++.h>
using namespace std;

int n;
int a[10];

void backtrack(int i){
    if (i >= (n+1)/2){
        for (int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
        return;
    }

    for (int val = 0; val <= 1; val++){
        a[i] = val;
        a[n-1-i] = val;

        backtrack(i+1);
    }
}

int main(){
    cin >> n;

    backtrack(0);

    return 0;
}