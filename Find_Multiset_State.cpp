#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k;
	    vector<int> a(n),v;
	    deque<int> d;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	       // d.push_back(a[i]);
	    }
	    sort(a.begin(),a.end());
	    for(int i=0;i<n;i++){
	        d.push_back(a[i]);
	    }
	    while(k--){
	        int x=d.front();
            int y=d.back();
            d.pop_front();
            d.pop_back();
            d.push_back(x+y);
	    }
        while(!d.empty()){
            v.push_back(d.front());
            d.pop_front();
        }
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
	    
	}

}
