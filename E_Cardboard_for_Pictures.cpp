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
// int N=2e5+2; 
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    ll n,s;
    cin>>n>>s;
    vll a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll l=1,r=1e9+2;
    while(l<=r){
        ll mid=(l+r)/2;
        ll tmp=0;
        for(ll i=0;i<n;i++){
            ll x=a[i]+(2*mid);
            tmp += (x*x);
            if(tmp > s) break;
        }
        if(tmp==s){
            out(mid)
            return;
        }else if(tmp>s){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
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