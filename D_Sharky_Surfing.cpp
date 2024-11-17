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
    vector<int> vv;
    int i=0;
    ll tmp=0;
    bool flag=true;
    ll ans=0;
    for(int j=0;j<m&&i<n;j++){
        int cnt=0;
        vii v;
        while(i<n && j<m && a[i].first > b[j].first){
            tmp += b[j].second;
            v.pb(b[j].second);
            j++;
        }
        j--;
        sort(all(v));
        int k=0;
        while(k<v.size() && tmp-v[k]>(a[i].second - a[i].first)){
            tmp -= v[k];
            k++;
            cnt++;
        }
        while(k<v.size()){
            vv.push_back(v[k++]);
        }
        vector<int> tmpp;
        sort(vv.rbegin(),vv.rend());
        k=vv.size()-1;
        while(k>=0 && tmp<(a[i].second - a[i].first)){
            tmp += vv[k--];
        }
        while(k>=0){
            tmpp.push_back(vv[k--]);
        }
        vv.clear();
        for(auto x:tmpp) vv.push_back(x);
        if(tmp<(a[i].second - a[i].first)){
            flag=false;
            break;
        }else{
            ans += (v.size()-cnt);
        }
        i++;
    }
    while(i<n){
        if(tmp <= (a[i].second - a[i].first)){
            flag=false;
            break;
        }
        i++;
    }
    if(!flag){
        cout<<-1<<endl;
        return;
    }
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