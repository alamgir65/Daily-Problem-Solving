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
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    int n; cin>>n;
    vii a(n),b(n+1);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<=n;i++) cin>>b[i];
    ll sum=0;
    int curr=imax;
    for(int i=0;i<n;i++){
        curr = min(abs(b[n]-a[i])+1,curr);
        curr = min(abs(b[n]-b[i])+1,curr);
    }
    for(int i=0;i<n;i++){
        sum += abs(a[i]-b[i]);
        if((b[n]<=b[i] && b[n]>=a[i]) || (b[n]<=a[i] && b[n]>=b[i])){
            curr = min(curr, 1);
        }
    }
    sum += curr;
    cout<< sum << endl;
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}