#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int t; cin >>t;
	while (t--){
		int n; cin >> n;
		map <ll, ll> mp;
		for (int i = 0; i < n;i++){
			ll x; cin >> x;
			mp[x]++;
		}
		ll max_fre = 0;
		ll res;
		for (auto it : mp){
			if (it.second > max_fre){
				max_fre = it.second;
				res  = it.first;
				
			}
		}
		cout << res << " " << max_fre <<endl;
		
	}

	return 0;
}
