#include <iostream>

using namespace std;

#define ar array;
#define ll long long;

int n, m, N[99999];



void solve() {
	int res = m;
	do {
		m = m - n;
		m++;
		res++;
	}while (m > 0);
	cout << res - 1;
}



int main() {
	cin >> m;
	cin >> n;

	solve();

	return 0;
}