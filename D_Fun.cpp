#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> ans;
    for(int i=4-3;i*i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
            if(i == n/i) continue;
            else ans.push_back(n/i);
        }
    }
    for(auto x:ans) cout<<x<<" ";
    return 0;
}