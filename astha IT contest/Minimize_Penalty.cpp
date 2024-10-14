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
    ll sum=0;
    vector<pair<ll,ll>> v;
    for(int i=0;i<n;i++){
        ll a,b; cin>>a>>b;
        v.pb({a,b});
    }
    sort(all(v));
    reverse(all(v));
    ll pre_first[n+1];
    ll pre_last[n+1];
    pre_first[0]=v[0].first;
    pre_last[0]=v[0].second;
    for(ll i=1;i<n;i++){
        pre_first[i]=pre_first[i-1]+v[i].first;
        pre_last[i]=pre_last[i-1]+v[i].second;
    }
    if(pre_last[n-1] > k){
        out(-1)
        return;
    }
    ll penalty=0;
    bool ok=true;
    for(int i=0;i<n;i++){
        ll first=pre_first[n-1]-pre_first[i];
        ll last=pre_last[n-1]-pre_last[i];
        if(sum+first+v[i].first <= k){
            sum += v[i].first;
        }else if(sum+first+v[i].second <= k){
            sum += v[i].second;
            penalty++;
        }else if(sum+last+v[i].first <= k){
            sum += v[i].first;
        }else if(sum + last + v[i].second <= k){
            sum += v[i].second;
            penalty++;
        }else{
            ok=false;
            break;
        }
    }
    if(sum > k || ok==false){
        out(-1)
        return;
    }
    // out(sum)
    out(penalty)
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