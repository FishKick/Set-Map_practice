#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore();
	map <string, int > mp;
	for (int i =0; i < n; i++){
		string str;
		getline(cin, str);
		mp[str]++;
		
		if (mp[str] == 1) cout << str << endl;
		else if (mp[str] >= 2){
			cout << str << mp[str] - 1 << endl;
			
		}
	}
	return 0;
}
