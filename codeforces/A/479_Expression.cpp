#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

#define ll long long
#define ar array

int n, m, N[999999];
int a, b, c;
int Max;
int solve1(vector<int> v, int i = 0) {
	if (i == v.size() - 1) {
		return v[i];
	}	
	else {
		return max(v[i] * solve1(v, i+ 1), v[i] + solve1(v, i + 1));
	}
}
int solve2(vector<int> v, int n) {
	if (n == 0) {
		return v[n];
	}	
	else {
		return max(v[n] * solve2(v, n - 1), v[n] + solve2(v, n - 1));
	}
}
int main() {
	cin >> a;
	cin >> b;
	cin >> c;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);

	cout << max(solve1(v, 0), solve2(v, v.size() - 1));
	return 0;
}
