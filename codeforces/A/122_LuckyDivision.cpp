#include <iostream>
#include <algorithm>
#include <string>
#include <vector>


using namespace std;

#define ll long long
#define ar array
#define vt vector<int>

int n, m, N[999999];

vt lk;

void dfs(string s) {
	if (s.size() >= 4) {
		return;
	}	
	if (s != "") {
		lk.push_back(stoi(s));
	}
	dfs(s + "4");
	dfs(s + "7");
}



int main() {
	dfs("");
	cin >> n;
	for (int i = 0; i < lk.size(); i++) {
		if (n % lk[i] == 0) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
