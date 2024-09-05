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
    ll n; cin>>n;
    map<ll,ll> mp;
    vll a(n,0);
    ll mx_fre=0,total_pairs=0;
    for(int i=0;i<n;i++){
        int x,y; cin>>x>>y;
        x--;
        a[x]=y;
        total_pairs -= mp[y]*(mp[y]-1)/2;
        mp[y]++;
        total_pairs += mp[y]*(mp[y]-1)/2;
        ll remaining_zeros = n-(i+1);
        mx_fre = max(mx_fre,mp[y]);
        ll tmp=mx_fre + remaining_zeros;
        ll ans=tmp*(tmp-1)/2 - (mx_fre*(mx_fre-1)/2);
        cout<<ans + total_pairs<<" ";
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