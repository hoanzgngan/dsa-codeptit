#include<bits/stdc++.h>
using namespace std;

void soNhoNhatVaNhoThuHai (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i = 0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        
        bool samesame = true;
        for (int i = 0; i<n; i++){
            if (v[i] != v[0]){
                samesame = false;
                break;
            }
        }
        if (samesame == true){
            cout << "-1";
            cout << endl;
        }
        
        if (samesame == false) {
            cout << v[0] << " ";

            for (int i = 0; i<n; i++){
                if (v[0] < v[i]){
                    cout << v[i];
                    break;
                }
            }
            cout << endl;
        }
    
    }
}

int main(){
    soNhoNhatVaNhoThuHai();
    return 0;
}