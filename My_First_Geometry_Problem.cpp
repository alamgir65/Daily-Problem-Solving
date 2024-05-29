#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    string s; cin>>s;
	    int cnt=0,sum=1;
	    for(char c:s){
	        if(c=='1') cnt++;
	    }
	    if(cnt==1) sum += 10;
	    else if(cnt==2){
	        if((s[0]=='0' && s[1]=='0') || (s[2]=='0' && s[3]=='0')) sum += 20;
	        else sum += 120;
	    }else if(cnt==3){
	        sum += 230;
	    }else if(cnt==4) sum += 440;
	    
	    cout<< sum << endl;
	}

}
