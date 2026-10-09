#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    
    while(t--){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);

        long long a; cin >> a;
        long long b; cin >> b;
        long long ans = 1;

        for (int i = 0; i < b; i++){
            ans = ans * a;
            
        }
        cout << ans << '\n';

        
    }

    return 0;
}