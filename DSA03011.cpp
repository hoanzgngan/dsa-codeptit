    #include<bits/stdc++.h>
    using namespace std;

    long long ConnectRopes(vector<int>& ropes){
        priority_queue<long long, vector<long long>, greater<long long>> pq(ropes.begin(), ropes.end());
       
        long long total = 0;
        const long long BASE = 1e9 + 7;

        while(pq.size() > 1){
            long long first = pq.top();
            pq.pop();
            long long second = pq.top();
            pq.pop();

            long long z = (first + second) % BASE;
            total = (total + z) % BASE;

            pq.push(z);
        }
        return total;
    }

    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);

        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            vector<int> ropes(n);
            for (int i = 0; i < n; i++){
                cin >> ropes[i];
            }

            cout << ConnectRopes(ropes) << "\n";
        }


        return 0;
    }