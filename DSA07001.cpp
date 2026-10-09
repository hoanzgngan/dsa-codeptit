#include<bits/stdc++.h>
using namespace std;

// LIFO // Last In, First Out
int main() {

    vector<int> list;
    string input;

    while(cin >> input){
        if (input == "push"){
            int index; cin >> index;
            list.push_back(index);
        }

        else if (input == "pop"){
            if (list.size() > 0){
                list.pop_back();
            }
        }
        
        else if (input == "show"){
            if (list.empty()){
                cout << "empty" << endl;
            }
            else {
                for (int i = 0; i < list.size(); i++){
                    cout << list[i] << " ";
                }
                cout << endl;
            }
        }

    }

    return 0;
}