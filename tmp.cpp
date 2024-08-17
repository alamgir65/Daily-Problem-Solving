#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x; cin>>n>>x;
    for(int i=0;i<n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> v;
    for(int i=0;i<x;i++){
        int s; cin>>s;
        v.push_back(s);
    }
    for(auto s:v) cout<<s<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--) solve();
}