#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	string str;
	cin >> str;
	
	set<char> s;
	for (int i = 0; i < str.length(); i++){
		str[i] = tolower(str[i]);
		s.insert(str[i]);
	}
	if (*s.begin() == 'a' && *s.rbegin() == 'z' ) cout << "YES\n";
	else cout << "NO\n";  
	

	return 0;
}
