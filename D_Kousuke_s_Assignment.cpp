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
ll subarray(vector<int>& arr) {
    int n = arr.size();
    int count = 0;
    int currentSum = 0; 
    unordered_set<int> sumSet;
    sumSet.insert(0); 
    for (int i = 0; i < n; i++) {
        currentSum += arr[i];
        if (sumSet.find(currentSum) != sumSet.end()) {
            count++;
            sumSet.clear(); 
            currentSum = 0;
            sumSet.insert(0);
        } else {
            sumSet.insert(currentSum);
        }
    }
    return count;
}
void solve(){
    int n; cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        v.pb(x);
    }
    ll ans = subarray(v);
    cout<< ans <<endl;
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}