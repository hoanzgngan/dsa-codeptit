#include<bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;

    while (t--){
        stack<char> st;
        string s; cin >> s;

        int count = 0;

        for (char x : s){

            if(x == '('){
                st.push('(');
            }

            else {
                if (st.empty()){
                    st.push('(');
                    count++;
                } 
                else {
                    st.pop();
                }
            }
        }
        
        cout << count + st.size()/2 << endl;

    }
}

