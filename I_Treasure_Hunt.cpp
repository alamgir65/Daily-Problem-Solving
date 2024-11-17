#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1005][1005];
ll knapsack(ll n,ll s,ll w[],ll v[]){
    if(s==0 || n==0) return 0;
    if(dp[n][s] != -1){
        return dp[n][s];
    }
    if(w[n-1]<=s){
        ll op1=knapsack(n-1,s-w[n-1],w,v)+v[n-1];
        ll op2=knapsack(n-1,s,w,v);
        return dp[n][s]=max(op1,op2);
    }
    else{
        return dp[n][s]=knapsack(n-1,s,w,v);
    }
}
int main()
{   
    ll n,s; cin>>n>>s;
    ll w[n],v[n];
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=s;j++){
            dp[i][j]=-1;
        }
    }
    cout<<knapsack(n,s,w,v);
    return 0;
}