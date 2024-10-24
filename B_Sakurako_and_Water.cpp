#include <iostream>
#include <vector>
using namespace std;

long long traverseDiagonals(vector<vector<int>>& matrix, int n) {
    long long ans=0;
    for (int d = 0; d < n; d++) {
        int row = 0, col = d;
        int mn=0;
        while (col < n && row < n) {
            int x=matrix[row][col];
            if(x<0) mn=min(mn,x);
            row++;
            col++;
        }
        ans -= mn;
    }
    for (int d = 1; d < n; d++) {
        int row = d, col = 0,mn=0;
        while (row < n && col < n) {
            int x=matrix[row][col];
            if(x<0) mn=min(mn,x);
            row++;
            col++;
        }
        ans -= mn;
    }
    return ans;
}
void solve(){
    int n; cin>>n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>matrix[i][j];
        }
    }
    long long ans=traverseDiagonals(matrix, n);
    cout<<ans<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) solve();

    return 0;
}
