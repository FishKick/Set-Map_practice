#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int t; cin >> t;
	while (t--){
		cin.ignore();
		string s;
		getline(cin, s);
		map<char, int> mp;
		for (int i= 0; i < s.size(); i++){
			mp[s[i]]++;
		}
		int max_fre = INT_MIN;
		char res;
		for (auto it : mp){
			if (it.second > max_fre){
				max_fre = it.second;
				res = it.first;
			}
		}
		cout << res << endl;
	}

	return 0;
}
