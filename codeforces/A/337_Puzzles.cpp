#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int n, m, N[99999];

void solve() {
	cin >> n; 
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> N[i];
	}
	sort(N, N + m);
	int res = 9999;
	// 5 7 10 10 12 22
	// 
	int i = 0;
	do {
		res = min(res, N[i + (n - 1)] - N[i]);	
		i++;
	}
	while(i < m - n + 1);
	cout << res;
}

int main() {
	solve();
	return 0;
}
