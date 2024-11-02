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
int cnt;
void dfs(int node, vector<int> &visited,vector<int> adj[]){
    visited[node]=1;
    cnt++;
    for(auto u:adj[node]){
        if(!visited[u]){
            dfs(u,visited,adj);
        }
    }
}
void solve(){
    int n; cin>>n;
    ll ans=0;
    vii a(n+1);
    vector<int> visited(n+2,false);
    vii indx(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        indx[a[i]]=1;
    }
    vector<int> adj[n+2];
    for(int i=1;i<=n;i++){
        if(i==1 || a[a[i]]==i) continue;
        adj[i].pb(indx[a[i]]);
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            cnt=0;
            dfs(i,visited,adj);
            ans += (cnt-1)/2;
        }
    }
    out(ans)
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