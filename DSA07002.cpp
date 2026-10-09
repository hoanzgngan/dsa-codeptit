#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> list;
    int t; cin >> t;

    while(t--){
        string input; cin >> input;

        if (input == "PUSH"){
            int index; cin >> index;
            list.push_back(index);
        }

        else if (input == "POP"){
            if (list.size() > 0)
            list.pop_back();
        }

        else if (input == "PRINT"){
            if (list.empty()){
                cout << "NONE";
            }
            
            else {
                if (list.size() > 0){
                    cout << list[list.size() - 1]; // 1 2 3 4 -> 4 (size = 4)
                }
                
            }
            cout << endl;
        }
    }


    return 0;
}