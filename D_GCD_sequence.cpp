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
bool ok(vii &a,int idx){
    vii tmp,g;
    for(int i=0;i<a.size();i++) if(i!=idx) tmp.pb(a[i]);
    for(int i=0;i<tmp.size()-1;i++) g.pb(__gcd(tmp[i],tmp[i+1]));
    if(is_sorted(all(g))) return true;
    return false;
}
void solve(){
    int n; cin>>n;
    vii a(n),v;
    for(int i=0;i<n;i++) cin>>a[i];
    int mx=0,cnt=0;
    for(int i=0;i<n-1;i++){
        int gc = __gcd(a[i],a[i+1]);
        v.pb(gc);
    }
    if(is_sorted(all(v))){
        yes
        return;
    }
    int idx;
    for(int i=0;i<n-2;i++){
        if(v[i]>v[i+1]){
            idx=i;
            break;
        }
    }
    if(ok(a,idx) || ok(a,idx+1) || ok(a,idx+2)) yes
    else no
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