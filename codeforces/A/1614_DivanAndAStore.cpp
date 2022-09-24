#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

#define ll long long
#define ar array

void solve(long long l, long long r, long long k, vector<long long> v) {
	sort(v.begin(), v.end());	
	int res = 0;
	int i = 0;
	while (i < v.size()) {
		if (v[i] >= l && v[i] <= r) {	
			k = k - v[i];
			if (k < 0) {
				cout << res << endl;
				return;
			}
			res++;	
		}
		i++;
	}
	cout << res << endl;
}

int main() {
	int tc; cin >> tc;
	int n;
	long long l,r,k;
	for (int i = 0; i < tc; i++) {
		cin >> n; cin >> l; cin >> r; cin >> k;
		vector<long long> v;
		for (int j = 0; j < n; j++) {
			long long temp; cin >> temp;
			v.push_back(temp);
		}
		solve(l, r, k, v);
	}	
	return 0;
}
