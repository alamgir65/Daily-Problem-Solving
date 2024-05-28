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
    int len; cin>>len;
    string st; cin>>st;
    int x=0,y=0;
    for(char c:st){
        if(c=='N') y++;
        else if(c=='S') y--;
        else if(c=='E') x++;
        else x--;
    }
    if((abs(x)%2==1 || abs(y)%2==1) || (len==2 && x==0 && y==0)){
        no 
        return;
    }
    int n=0,s=0,e=1,w=1;
    char m[2]={'R','H'};
    string ans="";
    for(char c:st){
        if(c=='N') ans += m[n], n=1-n;
        else if(c=='S') ans += m[s], s=1-s;
        else if(c=='E') ans += m[e],e=1-e;
        else ans += m[w],w=1-w;
    }
    cout<<ans<<endl;
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