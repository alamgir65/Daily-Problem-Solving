#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define print(flag) (flag)? cout<<"YES\n" : cout<<"NO\n";
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define dqii deque<int> 
#define dqll deque<ll> 
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(){
    int n; cin>>n;
    vii a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];
    string s; cin>>s;
    s = "#"+s;
    // vll a(ans);
    vll ans(n+1);
    for(int i=1;i<=n;i++) ans[i]=-1;
    for(int i=1;i<=n;i++){
        int ss=0;
        if(s[i]=='0') ss++;
        if(ans[i] != -1) continue;
        int x2=i;
        vll v;
        v.pb(i);
        while(i != a[x2]){
            x2 = a[x2];
            v.pb(x2);
            if(s[x2]=='0') ss++;
        }
        for(auto u:v){
            ans[u]=ss;
        }
    }

    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    nl
}
love{
    Alamgir
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;    
}