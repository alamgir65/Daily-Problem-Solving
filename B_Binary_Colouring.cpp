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
void solve(){
    ll n; cin>>n;
    string s;
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1)
             s += "1";
        else
            s += "0";
    }
    int last=-1,cnt=1,ok=0;
    for(int i=31;i>0;i--){
        if(s[i]=='1' && s[i-1]=='1'){
            if(ok==0){
                ok=1;
                last=i;
            }
        }else if(ok==1){
            for(int j=last-1; j>=i;j--) s[j]='0';
            s[last]='5';
            s[i-1]='1';
            ok=0;
        }
    }
    reverse(all(s));
    cout<<32<<endl;
    for(int i=0;i<32;i++){
        if(s[i]=='0') cout<<0<<" ";
        else if(s[i]=='1') cout<<1<<" ";
        else cout<<-1<<" ";
    }
    cout<<endl;
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