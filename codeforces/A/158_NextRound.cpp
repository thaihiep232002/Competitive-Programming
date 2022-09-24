#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

#define ll long long
#define ar array
#define vt vector<int>

int n, k;
void solve(vt v) {
	int res = 0;	
	int score = v[k - 1];
	for (int i = 0; i < v.size(); i++) {
		if (v[i] >= score && v[i] > 0) {
			res++;
		}
	}
	cout << res;
}

int main() {
	cin >> n; cin >> k;
	vt v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];	
	}
	solve(v);
	return 0;
}
