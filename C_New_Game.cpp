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
    ll n,k; cin>>n>>k;
    vll a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(all(a));
    map<int,int> mp;
    for(auto x:a) mp[x]++;
    vll tmp;
    for(auto [x,y]:mp) tmp.push_back(x);
    ll sz=tmp.size();
    sort(all(tmp));
    vector<pair<ll,pair<ll,ll>>> v;
    ll cnt=0,sum=0;
    for(int i=0;i<sz;i++){
        if(i==0 || abs(tmp[i-1]-tmp[i])<=1){}
        else cnt++,sum=0;
        sum += mp[tmp[i]];
        v.push_back({tmp[i],{sum,cnt}});
    }
    sort(all(v));
    ll ans=0;
    for(int i=sz-1;i>=0;i--){
        int index=i-k;
        if(index >= 0 && v[i].second.second == v[index].second.second){
            ans = max(ans,v[i].second.first-v[index].second.first);
        }else ans = max(ans,v[i].second.first);
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