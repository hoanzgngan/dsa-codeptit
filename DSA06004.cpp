#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while (t--){
        int n; cin >> n;
        int m; cin >> m;

        set<int> a;
        set<int> b;
        set<int> s;
        
        //union 
        for (int i = 0; i<n; i++){
            int x; cin >> x;
            s.insert(x);
            a.insert(x);
        }

        for (int i = 0; i<m; i++){
            int x; cin >> x;
            s.insert(x);
            b.insert(x);
        }

        for (int x : s){
            cout << x << " ";
        }
        cout << endl;
        
        //intersection

        for (int x : a){
            if (b.count(x)){
                cout << x << " ";
            }
        }
        cout << endl;
        
        
    }
}