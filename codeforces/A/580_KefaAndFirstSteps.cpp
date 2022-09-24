#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int n;

void solve(vector<int> v) {
	int res = 0;
	int i = 0;
	while (i < n) {
		int cnt = 1;
		int j = i + 1;
		while (v[j] >= v[j - 1] && j < n) {
			cnt++;	
			j++;
		}	
		res = max(res, cnt);
		i = j;
	}
	cout << res;
}

int main() {
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
		
	solve(v);

	return 0;
}
