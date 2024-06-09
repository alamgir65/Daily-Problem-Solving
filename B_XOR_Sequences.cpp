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
int countSetBits(int n) {
    int count = 0,cnt=0;
    while (n) {
        count += n & 1;
        n >>= 1;
        cnt++;
    }
    return cnt-count;
}
string intToBinary(int n) {
    string binary = bitset<32>(n).to_string();
    // Remove leading zeros
    binary.erase(0, binary.find_first_not_of('0'));
    return binary.empty() ? "0" : binary;
}
void solve(){
    int x,y; cin>>x>>y;
    for(int i=0;i<31;i++){
        if(((x>>i)&1) != ((y>>i)&1)){
            cout<< (1LL<<i)<<endl;
            break;
        }
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