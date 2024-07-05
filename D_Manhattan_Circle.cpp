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
    int n,m; cin>>n>>m;
    vector<string> v;
    int mx=-1,idx=-1;
    for(int i=1;i<=n;i++){
        string s; cin>>s;
        v.pb(s);
        int cnt=0,mm=0;
        for(int j=0;j<m;j++){
            if(s[j]=='#') mm++;
        }
        // if(cnt==0 && s[m-1]=='#') m=1;
        if(mm>mx){
            mx=mm;
            idx=i-1;
        }
    }
    int half=mx/2 + mx%2;
    int c=0;
    for(int i=0;i<m;i++){
        if(v[idx][i]=='#') c++;
        if(c == half){
            out2(idx+1,i+1)
            return;
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