#include<bits/stdc++.h>
using namespace std;

int n, a[100], x[100];
int s;
bool found;
int cnt = 0;
vector<vector<int>> res;

void Try(int i, int start, int sum){
    for (int j = start; j < n; j++){
        x[i] = a[j];
        sum += a[j];
        if (sum == s){
            found = true;
            cnt++;
            vector<int> tmp;
            for (int idx = 1; idx <= i; idx++){
                tmp.push_back(x[idx]);
            }
            res.push_back(tmp);
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
    cin.tie(NULL);
   
    int t; cin >> t;
    while (t--){
        cin >> n >> s;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);

        found = false; 
        cnt = 0;
        res.clear();
        Try(1, 0, 0);
        

        if (!found){
            cout << "-1";
        }

        else {
            cout << cnt << " ";
            for (auto v : res){
                cout << "{";
                for (int i = 0; i < v.size(); i++){
                    cout << v[i];
                    if (i < v.size()-1){
                        cout << " ";
                    }
                }
                cout << "} ";
            }
        }
        cout << endl;
    }
  
    return 0;
}