#include<bits/stdc++.h>
using namespace std;
//giai bang quay lui
int n, c[105][105], x[100];
int visited[105];
int d = 0, ans = INT_MAX, cmin = INT_MAX; // chi phi nho nhat giua hai thanh pho bat ki
//Cấu hình: x1, x2, x3... xn
//x[i]: số thứ tự thành phố thứ i mà người du lịch đi qua
 
void nhap(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> c[i][j];
            if (c[i][j] != 0){
                cmin = min(cmin, c[i][j]);
            }
        }
    }
    memset(visited, 0, sizeof(visited));
}

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (visited[j] == 0){
            visited[j] = 1;
            x[i] = j;
            d += c[x[i-1]][x[i]];
            
            if (i == n){
                ans = min(ans, d + c[x[n]][1]);
            }
            // danh gia can
            else if (d + (n-i+1)*cmin < ans){
                Try(i+1);
            }
            //backtrack
            visited[j] = 0;
            d -= c[x[i-1]][x[i]];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    nhap();
    x[1] = 1; visited[1] = 1;
    Try(2);
    cout << ans << endl;

    return 0;
}

