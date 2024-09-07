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
    string s; cin>>s;
    int n=s.size();
    bool flag=false,mainFlag=false;
    string main="",first,last;
    for(int i=0;i<n;i++){
        main += s[i];
        if(i < (n/2 - 1)) continue;
        last="";
        for(int j=i+1;j<n;j++){
            last += s[j];
        }
        if(main == last){
            flag=true;
            // break;
        }
        bool ok=false;
        for(int j=i;j>=0;j--){
            if(last=="") break;
            last = s[j]+last;
            if(last.size() > main.size()) break;
            if(main ==last){
                ok=true;
                mainFlag=true;
                break;
            }
        }
        if(ok) break;
    }
    if(!mainFlag) no 
    else{
        yes
        out(main)
    }
}
love{
    Alamgir
    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;    
}