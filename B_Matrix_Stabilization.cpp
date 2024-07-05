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
int fun(int a,int b,int c){
    if(a>b && a>c) return a;
    else if(b>a && b>c) return b;
    else return c;
}
int maxValue(int a, int b, int c, int d) {
    int max1 = (a > b) ? a : b;
    int max2 = (c > d) ? c : d;
    return (max1 > max2) ? max1 : max2;
}
void solve(){
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0 && i!=n-1 && j!=m-1){
                if(a[i][j]>a[i][j+1] && a[i][j]>a[i+1][j]){
                    a[i][j]=max(a[i][j+1],a[i+1][j]);
                }
            }
            else if(i!=0 && i==n-1 && j==0 && j!=m-1){
                if(a[i][j]>a[i-1][j] && a[i][j]>a[i][j+1]){
                    a[i][j]=max(a[i-1][j],a[i][j+1]);
                }
            }
            else if(i==0 && i!=n-1 && j!=0 && j==m-1){
                if(a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j]){
                    a[i][j]=max(a[i][j-1],a[i+1][j]);
                }
            }
            else if(i!=0 && j!=0 && i==n-1 && j==m-1){
                if(a[i][j]>a[i][j-1] && a[i][j]>a[i-1][j]){
                    a[i][j]=max(a[i][j-1],a[i-1][j]);
                }
            }else if(i!=0 && j!=0 && i!=n-1 && j==m-1){
                if(a[i][j]>a[i][j-1] && a[i][j]>a[i-1][j] && a[i][j] > a[i+1][j]){
                    int x=fun(a[i-1][j],a[i+1][j],a[i][j-1]);
                    a[i][j]=x;
                }
            }
            else if(i!=0 && j!=0 && i==n-1 && j!=m-1){
                if(a[i][j]>a[i][j-1] && a[i][j]>a[i-1][j] && a[i][j] > a[i][j+1]){
                    int x=fun(a[i-1][j],a[i][j+1],a[i][j-1]);
                    a[i][j]=x;
                }
            }else if(i==0 && j!=0 && i!=n-1 && j!=m-1){
                if(a[i][j]>a[i][j-1] && a[i][j]>a[i+1][j] && a[i][j] > a[i][j+1]){
                    int x=fun(a[i+1][j],a[i][j+1],a[i][j-1]);
                    a[i][j]=x;
                }
            }else if(i!=0 && j==0 && i!=n-1 && j!=m-1){
                if(a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j] > a[i][j+1]){
                    int x=fun(a[i+1][j],a[i][j+1],a[i-1][j]);
                    a[i][j]=x;
                }
            }else if(i!=0 && j!=0 && i!=n-1 && j!=n-1){
                if(a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j] > a[i][j+1] && a[i][j]>a[i][j+1]){
                    int x=maxValue(a[i+1][j],a[i-1][j],a[i][j-1],a[i][j+1]);
                    a[i][j]=x;
                }
            }else if(n==1){
                if(j==0 && j!=m-1 && a[i][j]>a[i][j+1]) a[i][j]=a[i][j+1];
                else if(j==m-1 && j!=0 && a[i][j]>a[i][j-1]) a[i][j]=a[i][j-1];
                else if(j!=0 && j!=m-1 && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]) a[i][j]=max(a[i][j-1],a[i][j+1]);
            }
            else if(m==1){
                if(i==0 && i!=n-1 && a[i][j]>a[i+1][j]) a[i][j]=a[i+1][j];
                else if(i==n-1 && i!=0 && a[i][j]>a[i-1][j]) a[i][j]=a[i-1][j];
                else if(i!=0 && i!=n-1 && a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j]) a[i][j]=max(a[i-1][j],a[i+1][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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