#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    ll ans=0;
    int mx=0,Last_mx=a[0];
    for(int i=1;i<n;i++){
        if(a[i] < Last_mx){
            ans += Last_mx - a[i];
            mx = max(mx,(Last_mx-a[i]));
        }
        Last_mx = max(Last_mx,a[i]);
    }
    ans += mx;
    cout<<ans<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
