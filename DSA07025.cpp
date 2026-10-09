#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    stack<long long> st;

    while (t--){
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            string s; cin >> s;

            if (s == "+" || s == "-" || s == "*" || s == "/"){
                long long b = st.top();

                st.pop();
                long long a = st.top();
                st.pop();

                if (s == "+"){
                    st.push(a+b);
                } else if (s == "-"){
                    st.push(a-b);
                } else if (s == "*"){
                    st.push(a*b);
                } else if (s == "/"){
                    st.push(a/b);
                }
            }
            else (st.push(stoll(s)));
        }
        cout << st.top() << "\n";
    }

    return 0;
}