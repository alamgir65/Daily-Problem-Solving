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
    ll n,m; cin>>n>>m;
    vll a(n);
    map<ll,ll> mp;
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto [x,y]:mp){
        ll can=m/x;
        can = min(can,1LL * y);
        ll first_take = can * x;
        ans = max(ans,first_take);

        if(mp.find(x+1) == mp.end()) continue;

        ll first_rem = m-first_take;
        ll can_for_rem = first_rem/x+1;
        can_for_rem = min(can_for_rem,mp[x+1]);
        ll take_for_rem = can_for_rem * (x+1);
        first_take += take_for_rem;
        first_rem -= take_for_rem;
        ll nxt = mp[x+1]-can_for_rem;

        ans = max(ans,first_take + min({nxt,first_rem,can}));
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