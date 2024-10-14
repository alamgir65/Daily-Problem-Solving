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
    int n; cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        v.pb(s);
    }
    int q; cin>>q;
    vii ans;
    while(q--){
        string s; cin>>s;
        int frq1[26]={0};
        for(auto x:s) frq1[x-'a']++;
        int cnt=0;
        for(auto ss:v){
            int frq2[26]={0};
            for(auto x:ss) frq2[x-'a']++;
            bool flag=true;
            for(int i=0;i<26;i++){
                if(frq1[i]<frq2[i]) flag=false;
            }
            if(flag) cnt++;
        }
        cout<<cnt<<endl;
    }
}
love{
    Alamgir
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<":\n";
        solve();
    }
    return 0;    
}