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
string intToBinary(int num) {
    return bitset<32>(num).to_string();
}
unsigned long long binaryToInt64(const string &binary) {
    return bitset<64>(binary).to_ullong();
}
void solve(){
    ll n,m; cin>>n>>m;
    if(m==0){
        out(n)
        return;
    }
    string a;
    for(int i=0;i<32;i++){
        a += "0";
    }
    n += m-1;
    if(n<=0){
        out(1)
        return;
    }
    n++;
    while(true){
        string s=intToBinary(n);
        reverse(all(s));
        for(int i=0;i<32;i++){
            if(s[i]=='1' && a[i]=='0'){
                a[i]='1';
            }
        }
        if((n&(n-1))==0 && n!=2) break;
        n--;
    }
    reverse(all(a));
    ll ans=binaryToInt64(a);
    out(ans)
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