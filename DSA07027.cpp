#include<bits/stdc++.h>
using namespace std;

int main (){
    int t; cin >> t;

    while (t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        stack<int> st;
        vector<int> a(n, -1);

        for (int i = n-1; i >= 0; i--){
            while(!st.empty() && v[i] >= st.top()){
                st.pop();
            }
            if (!st.empty()){
                a[i] = st.top();
            }
            st.push(v[i]);
        }

        for (int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;

    }
}