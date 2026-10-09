#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<int> chan;
    vector<int> le;

    for (int i = 0; i < n; i++){
        if (i % 2 == 0) {
            le.push_back(v[i]);
        }
        else chan.push_back(v[i]);
    }

    sort(chan.begin(), chan.end(), greater<int>());
    sort(le.begin(), le.end());

    int x = 0; int y = 0;

    for (int i = 0; i<n; i++){
        if (i%2 == 0){
        cout << le[x] << " ";
        x++;
    }
        else{
            cout << chan[y] << " ";
            y++;
        } 

    }



    return 0;
}