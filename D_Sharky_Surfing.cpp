#include<bits/stdc++.h>
#define ll long long
#define lld long double
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
const int N=1e5+3;
const int INF=1e9+7;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
ll power(ll b,ll p){
    ll res=1;
    while(p>0){
        if(p%2) res *= b, p--;
        else b *= b, p/=2;
    }
    return res;
}

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a, b);
}
ll nCr(ll n,ll r){
    double res=1;
    for(ll i=1;i<=r;i++){
        res *= (n-i+1)/i;
    }
    return (ll)res;
}
void solve(){
    ll n,m,L; cin>>n>>m>>L;
    vector<pii> a(n),b(m);
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<m;i++){
        cin>>b[i].first>>b[i].second;
    }
    
    priority_queue<int> pq;
    bool flag=true;
    ll cnt=0,sum=0;
    int j=0;
    for(int i=0;i<n;i++){
        while(j<m && a[i].first > b[j].first){
            pq.push(b[j].second);
            j++;
        }
        while(pq.size() && sum < (a[i].second - a[i].first+1)){
            sum += pq.top();
            pq.pop();
            cnt++;
        }
        if(sum < (a[i].second - a[i].first+1)){
            flag=false;
            break;
        }
    }
    if(!flag) out(-1)
    else out(cnt)
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