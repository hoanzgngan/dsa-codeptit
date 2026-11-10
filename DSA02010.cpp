#include<bits/stdc++.h>
using namespace std;

int n, a[100], s;
int x[105]; // saving cau hinh
bool found;

void Try(int i, int start, int sum){
    for (int j = start; j < n; j++){
        x[i] = a[j];
        sum += a[j];
        if (sum == s){
            found = true;

            cout << "[";
            for (int idx = 1; idx <= i; idx++){
                cout << x[idx];
                if (idx < i){
                    cout << " ";
                }
            }
            cout << "]";

        }
        else if (sum < s){
            Try(i+1, j, sum);
        }
        //backtrack 
        sum -= a[j];
        
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--){
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);//in ra theo thứ tự không giảm các số

        found = false;
        Try(1, 0, 0);
        
        if (!found){
            cout << "-1";
        }
        cout << endl;
    }
   
    return 0;
}