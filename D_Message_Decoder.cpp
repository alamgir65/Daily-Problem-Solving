#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s; cin>>s;
    string tmp="hello";
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==tmp[j]) j++;
    }
    if(j>=5) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
