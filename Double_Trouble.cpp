#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    vector<int> a(n),p(n);
	    int mn=n+1,mx=-1;
	    // int mnI=-1,mnJ=-1,mxI=-1,mxJ=-1;
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]+p[i] >= a[n-1]){
	            mn=i;
	            break;
	        }
	    }
	    for(int i=n-1;i>=0;i--){
	        if(a[i]-p[i] <= a[0]){
	            mx=i;
	            break;
	        }
	    }
	    cout<<"mn " << mn << " Mx "<<mx<<endl;
	    bool flag=false;
	    if(mn==0 || mx==n-1){
            flag=true;
            cout<<"First ";
        }
	    else if((mn != n-1 && a[0]+p[0] >= a[mn-1]) || (mx != -1 && a[n-1]-p[n-1] <= a[mx+1])){
            flag=true;
            cout<<"Second ";
        }
	    else{
	        for(int i=1;i<n-1;i++){
	            if(a[i]-p[i] <= a[0] && a[i+1]+p[i+1] >= p[n-1]){
	                flag=true;
                    cout<<"Third ";
                    // break;
	                break;
	            }
	        }
	    }
	    if(flag) cout<<"YES\n";
	    else cout<<"NO\n";
	    
	}
	return 0;

}
