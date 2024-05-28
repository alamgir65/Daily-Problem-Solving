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
bool check(int n,int k,vii &a){
    vii bits(22,0);
    for(int i=0;i<k;i++){
        int x=a[i];
        int j=0;
        while(x>0){
            if(x%2){
                bits[j]++;
            }
            j++;
            x/=2;
        }
    }
    vii freq=bits;
    for(int i=k;i<n;i++){
        int x=a[i];
        int j=0;
        while(x>0){
            if(x%2){
                freq[j]++;
            }
            j++;
            x/=2;
        }
        j=0;
        x=a[i-k];
        while(x>0){
            if(x%2){
                freq[j]--;
            }
            j++;
            x/=2;
        }
        j=0;
        for(j=0;j<22;j++){
            if(freq[j]==0 && freq[j]<bits[j]) return false;
            if(bits[j]==0 && freq[j]>bits[j]) return false;
        }
    }
    return true;
}
void solve(){
    int n; cin>>n;
    vii a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int l=1,r=n,mid,ans=n;
    while(l<=r){
        mid=(l+r)/2;
        if(check(n,mid,a)){
            r=mid-1;
            ans=mid;
        }else{
            l=mid+1;
        }
    }
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