#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--)
	{
	    int  n; cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++) cin>>a[i];
	    int sum=0,cnt=0,ans=0;
	    for(int i=0;i<n;i++){
	        sum=0;
	        for(int j=i;j<n;j++){
	            sum += a[j];
	            if(sum%2==0){
	                ans=max(ans,(j-i+1));
	            }
	        }
	    }
	    cout<<ans<<endl;
	}
}
