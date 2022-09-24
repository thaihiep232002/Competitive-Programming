#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
	ll n, k;
	cin >> n; cin >> k;
	ll i =  (n + 1) / 2;
	if (k <= i) {
		cout << 2*k - 1;
	}
	else {
		cout << 2*(k - i);
	}

	return 0;
}
