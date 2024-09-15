#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            if(i != n/i){
                v.push_back(i);
                v.push_back(n/i);
            }
            else v.push_back(i);
        }
    }
    sort(v.begin(), v.end());
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}
