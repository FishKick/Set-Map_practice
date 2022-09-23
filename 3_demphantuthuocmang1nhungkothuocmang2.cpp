#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n, m; cin >> n >> m;
		int a[n];
		set<int> s;
		for(int& x : a) cin >> x;
		for (int i = 0; i< m ; i++){
			int x; cin >> x;
			s.insert(x);
		}
		map <int, bool> mp;
		int ok = 0;
		for (int i = 0; i < n; i++){
			if (!s.count(a[i])){
				mp[a[i]] = false; 
				ok = 1;
			}	
		}
		if (ok) for (auto it : mp) cout << it.first << " ";
		else cout <<"NOT FOUND";
	}

	return 0;
}
