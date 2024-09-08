#include<bits/stdc++.h>
using namespace std;
const int sz = 1e5 + 5, part = 300;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t; 
    cin >> t;
    while(t--) {
    	int n; cin >> n;
    	string s; cin >> s;
    	std::vector<int> v(26);
    	for(char &c:s) v[c - 'a']++;
    	int mxid = 0;
    	for(int i = 1; i < 26; i++) {
    		if(v[i] > v[mxid]) mxid = i;
    	}
    	string ans = "";
    	ans += char('a' + mxid);
    	v[mxid]--;
    	while(ans.size() < n) {
    		int hi = -1;
    		int last = ans.back() - 'a';
    		for(int i = 0; i < 26; i++) {
    			if(v[i] == 0) continue;
    			if(i != last && (hi == -1 || v[i] > v[hi]))
    				hi = i;
    		}
    		if(hi == -1) hi = last;
    		ans += char('a' + hi);
    		v[hi]--;
    	}
    	// sort(s.begin(), s.end());
    	cout << ans << "\n";
	}
    return 0;
}