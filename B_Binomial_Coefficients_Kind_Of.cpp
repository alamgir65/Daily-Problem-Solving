#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
ll mod_exp(ll base, ll exp, ll mod) {
    ll result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;  
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        ll ans = mod_exp(2, b[i], MOD);
        cout << ans << '\n';
    }
}

int main() {
    Alamgir
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
