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
    vii a(2*n);
    for(int i=0;i<2*n;i++) cin>>a[i];
    // int i=0,j=1;
    int m=2*n;
    ll ans=0;
    for(int i=0;i<m;i++){
        int l=i,r=i+1;
        if(a[l]<a[r]){
            int cnt=0;
            while(r+1 < m && a[l]<a[r+1]) r++,cnt++;
            int tmp=r;
            if(cnt%2==0){
                while(l<r){
                    ans += a[r]-a[l];
                    r--;
                    l++;
                }
                i=tmp;
            }
            
        }else if(a[l]>a[r]){
            int cnt=0;
            while(r+1<m &&  a[l]>a[r+1]) r++,cnt++;
            int tmp=r;
            if(cnt%2==0){
                while(l<r){
                    ans += a[l]-a[r];
                    r--;
                    l++;
                }
                i=tmp;
            }
        }else ans += abs(a[i]-a[i+1]),i++;
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