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
    int n,m,k; cin>>n>>m>>k;
    string s; cin>>s;
    int mx=0,cnt=0;
    for(auto x:s){
        if(x == 'C') cnt++;
        else cnt=0;
        mx=max(mx,cnt);
    }
    if(mx>=m){
        no 
        return;
    }else if(m > n){
        yes
        return;
    }
    // int r=-1;
    // for(int j=m-1;j>=0;j--){
    //     if(s[j]=='L'){
    //         r=j;
    //         break;
    //     }
    // }
    // if(r==-1){
    //     for(int j=m-1;j>=0;j--){
    //     if(s[j]=='W'){
    //         r=j;
    //         break;
    //         }
    //     }
    // }
    bool ok=false;
    for(int rr=0;rr<m;rr++){
        if(s[rr]=='C') continue;
        ll tmp=0;
        for(int i=rr;i<n;i++){
        if(s[i]=='L' && i+m > n) break;
        if(s[i]=='L'){
            if(s[i+m] != 'C') i+=(m-1);
            else{
                int j=i+m;
                while(j>i && s[j]=='C'){
                    j--;
                }
                i=j-1;
            }
        }
        else if(s[i]=='W') tmp++;
    }
    if(tmp <= k){
            ok=true;
            break;
        }
    }
    print(ok)
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