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
 
int pre_compute[200005];
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
vector<ll> v;
void solve(){
    int l,r; cin>>l>>r;
    ll ans=0;
    int a=l,cnt=0;
    while(a!=0){
        cnt++;
        a/=3;
    }
    ans += 2*cnt;
    ans += pre_compute[r]-pre_compute[l];
    out(ans)
}
love{
    Alamgir
    v.resize(200004,0);
    for(int i=1;i<200004;i++){
        int a=i;
        int cnt=0;
        while(a != 0){
            cnt++;
            a/=3;
        }
        v[i]=cnt;
    }
    for(int i=1;i<200001;i++){
        pre_compute[i]=pre_compute[i-1]+v[i];
    }
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        // cout<<"Case "<<i<<": ";
        solve();
    }
    return 0;    
}