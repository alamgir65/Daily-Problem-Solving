#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;

const int MOD = 1e9 + 7;
const int INF = INT_MAX;
const ll LINF = LLONG_MAX;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(v) v.begin(), v.end()
#define rep(i, a, b) for(int i = a; i < b; ++i)

void solve() {
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<int>> prefFreq1(n+1, vector<int>(26,0));
    vector<vector<int>> prefFreq2(n+1, vector<int>(26,0));
    rep(i, 1, n+1){
        rep(j, 0, 26){
            prefFreq1[i][j] = prefFreq1[i - 1][j];
            prefFreq2[i][j] = prefFreq2[i - 1][j];
        }
        prefFreq1[i][a[i-1]-'a']++;
        prefFreq2[i][b[i-1]-'a']++;
    }
    rep(i, 0, q){
        int l, r;
        cin >> l >> r;
        int ans = 0;
        rep(j, 0 ,26){
            if((prefFreq1[r][j] - prefFreq1[l-1][j]) - (prefFreq2[r][j] - prefFreq2[l-1][j]) <= 0)
                continue;
            else{
                ans += prefFreq1[r][j] - prefFreq1[l-1][j] - (prefFreq2[r][j] - prefFreq2[l-1][j]);
                // cout << j << endl;
            }
        }
        cout << ans << '\n'; 
    }
}

int main() {
    fast;
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}