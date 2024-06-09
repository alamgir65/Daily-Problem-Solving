#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,k; cin>>n>>k;
	    vector<int> a(n);
	    ll sum=0;
	    for(int i=0;i<n;i++) cin>>a[i];
	    for(int i=0;i<n-1;i++){
	        sum += abs(a[i]-a[i+1]);
	    }
	    int dif=0;
	    for(int i=0;i<n;i++){
	        int tmp1,tmp2;
	        if(i==0){
	            tmp1=max(abs(a[1]-1),abs(a[1]-k));
	            int d=tmp1 - abs(a[1]-a[0]);
	            dif=max(dif,d);
	            continue;
	        }else if(i==n-1){
                tmp1=max(abs(a[n-2]-1),abs(a[n-2]-k));
	            int d=tmp1 - abs(a[n-2]-a[n-1]);
	            dif=max(dif,d);
	            continue;
            }
	        int past=abs(a[i]-a[i+1])+abs(a[i]-a[i-1]);
	        int now=max((abs(a[i+1]-1)+abs(a[i-1]-1)),(abs(a[i+1]-k)+abs(a[i-1]-k)));
	        int d=now-past;
	        dif=max(dif,d);
	    }

	    sum += dif;
	    cout << sum << endl;
	}
    return 0;
}
