#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    int n; cin>>n;
    if(n<5){
        cout<<-1<<endl;
        return;
    }
    else if(n==5){
        cout<<2<<" "<<4<<" "<<5<<" "<<3<<" "<<1<<endl;
        return;
    }
    for(int i=2;i<=n;i+=2){
        if(i!=6) cout<<i<<" ";
    }
    cout<<6<<" ";
    for(int i=3;i<=n;i+=2) cout<<i<<" ";
    cout<<1<<endl;
    
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
