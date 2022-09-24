#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define ar array
#define vt vector<int>
#define MAX 7

void solve(const string &v) {
	int n = v.size();
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		int j = i;
		while (v[i] == v[j] && j < n) {
			cnt++;	
			j++;
			if (cnt == MAX) {
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
}

int main() {
	string n;
	getline(cin, n);
	solve(n);
	return 0;
}
