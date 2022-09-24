#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int n;

void solve(vector<int> v) {
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
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
