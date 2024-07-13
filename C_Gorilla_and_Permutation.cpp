#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,m,k; cin>>n>>m>>k;
    vector<int> ans(n);
    int i=0,x=n;
    while(x>m && i<n){
        ans[i]=x;
        x--;
        i++;
    }
    x=1;
    while(x<=m && i<n){
        ans[i]=x;
        x++;
        i++;
    }
    for(auto a:ans) cout<<a<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}
