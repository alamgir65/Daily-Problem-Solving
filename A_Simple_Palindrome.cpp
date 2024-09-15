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
    string s="aeiou",ans="";
    int r=0,k=n/5;
    string a="",e="",i="",o="",u="";
    for(int c=0;c<k;c++){
        a += "a",e+="e",i+="i",o+="o",u+="u";
    }
    int rem=n%5;
    if(rem==1) a += "a";
    else if(rem==2) a+="a",e += "e";
    else if(rem==3) a+="a",e+="e",i+="i";
    else if(rem==4) a+="a",e+="e",i+="i",o+="o";
    if(a!="") ans+=a;
    if(e!="") ans+=e;
    if(i!="") ans+=i;
    if(o!="") ans+=o;
    if(u!="") ans+=u;
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