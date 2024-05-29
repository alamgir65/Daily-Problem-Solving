#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
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
    vii p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    set<int> s;
    for(int i=1;i<=n;i++) s.insert(i);
    vector<pair<ll,ll>> v;
    int cur=-1;
    for(int i=0;i<n;i++) if(p[i]==1) cur=i;
    vii q(n,0);
    for(int i=0;i<n;i++){
        if(i%2 != cur%2){
            q[i]=n-p[i]+2;
            s.erase(q[i]);
        }else{
            v.pb({p[i],i});
        }
    }
    sort(all(v));
    reverse(all(v));
    int i=0;
    for(auto u:s){
        q[v[i].second]=u;
        i++;
    }
    for(int i=0;i<n;i++) cout<<q[i]<<" ";
    cout<<'\n';
}
love{
    Alamgir
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}