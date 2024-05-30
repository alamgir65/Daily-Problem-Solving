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
    int n,m; cin>>n>>m;
    vector<pair<ll,ll>> a,b;
    vll aa(n+m+1),bb(n+m+1);
    for(int i=0;i<(n+m+1);i++){
        cin>>aa[i];
        a.pb({aa[i],i});
    }
    for(int i=0;i<(n+m+1);i++){
        cin>>bb[i];
        b.pb({bb[i],i});
    }
    ll programmer=0,tester=0;
    vector<int> visited(n+m+1);
    for(int i=0;i<(n+m+1);i++){
        visited[i]=0;
    }
    sort(all(a));
    sort(all(b));
    int cntP=0,cntT=0;
    ll track=-1;
    for(auto [x,y]:a){
        if(x >= bb[y] && cntP<n && visited[y]==0){
            programmer += x;
            visited[y]=1;
            cntP++;
        }
    }
    for(auto [x,y]:b){
        if(cntT<m &&  visited[y]==0){
            tester += x;
            visited[y]=2;
            cntT++;
        }
    }
    if(cntP < n){
        for(auto [x,y]:a){
            if(cntP<n && visited[y]==0){
                programmer += x;
                visited[y]=1;
                cntP++;
            }
        }
    }
    for(int i=0;i<(n+m+1);i++){
        if(visited[i]==0){
            track=i;
            break;
        }
    }
    // cout<<"Track "<< track << endl;
    ll sum=programmer + tester;
    vll ans(n+m+1);
    for(int i=0;i<n+1+m;i++){
        ll tmp=sum;
        if(track == i){
            tmp=sum;
        }
        else if(visited[i]==1){
            tmp -= aa[i];
            tmp += aa[track];
        }else if(visited[i]==2){
            tmp -= bb[i];
            tmp += bb[track];
        }
        ans[i]=tmp;
    }
    for(int i=0;i<(n+m+1);i++) cout<<ans[i]<<" ";
    cout<<'\n';
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