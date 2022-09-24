#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

#define ll long long

int n; 	
void solve() {
	int res = 0;
	vector<int> v(3);
	for (int j = 0; j < n; j++) {
		int sum = 0;
		for (int i = 0; i < 3; i++) {
			cin >> v[i];
			sum += v[i];
		}
		if (sum >= 2) {
			res++;
		}
	}
	cout << res;
}

int main() {
	cin >> n;
	solve();
	return 0;
}
