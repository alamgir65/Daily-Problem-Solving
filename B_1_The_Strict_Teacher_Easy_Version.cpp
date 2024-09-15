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
    int n,m,q;
    cin>>n>>m>>q;
    vii a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(all(a));
    while(q--){
        int x; cin>>x;
        auto itL=lower_bound(a.begin(),a.end(),x);
        int lower_bound_value = (itL != a.end()) ? a[*itL] : 1;

        auto itR=upper_bound(a.begin(),a.end(),x);
        int upper_bound_value = (itR != a.end()) ? a[*itR] : n;
        ll ans;

        if(x > lower_bound_value && x<upper_bound_value){
            int tmp=(upper_bound_value-lower_bound_value-1);
            ans = tmp%2 + tmp/2;
        }else if(x < lower_bound_value){
            ans = lower_bound_value-1;
        }
        else ans=n-upper_bound_value;
        out(ans)

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