#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int coints[] = {1000,500,200,100,50,20,10,5,2,1}; //10
    
    while (t--){
        int val;
        cin >> val;
        int ans = 0;
        
        for (int i = 0; i < 10; i++){
            while (coints[i] <= val){
                val = val - coints[i];
                ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}