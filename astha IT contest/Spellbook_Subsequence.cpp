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
    string s,t; cin>>s>>t;
    vector<ordered_set<int>> v(3);
    int n=s.size();
    if(t.size()<3){
        out(0)
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]==t[0]) v[0].insert(i);
        else if(s[i]==t[1]) v[1].insert(i);
        else if(s[i]==t[2]) v[2].insert(i);
    }
    ll ans=0;
    ll sz=v[2].size();
    for(auto x:v[1]){
        int z=v[0].order_of_key(x);
        int y=sz - v[2].order_of_key(x);
        y=max(y,0);
        z=max(0,z);
        ans += z*y;
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