#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		set <int> s;
		for (int  i = 0; i< n; i++){
			int x; cin >> x;
			s.insert(x);
		}
		int k; cin >> k;
		while (k--){
			int temp; cin >> temp;
			if (s.count(temp)) cout << "YES";
			else cout << "NO";
			cout << endl;
		}
		cout << endl;	
	}

	return 0;
}
