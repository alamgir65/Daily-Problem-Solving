#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m; cin>>n>>m;
    // cout<<n<<" "<<m<<endl;
    string s,t;
    cin>>s;
    cout<<s<<endl;
    vector<int> a(m);
    set<int> st;
    for(int i=0;i<m;i++){
        cin>>a[i];
        st.insert(a[i]-1);
    }
    cin>>t;
    sort(t.begin(),t.end());
    int i=0;
    for(auto x:st){
        s[x]=t[i];
        i++;
    }
    cout<<s<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}