#include <iostream>

using namespace std;

#define ll long long
#define ar array



void solve() {
	int x, y; cin >> x; cin >> y;
	int xc = -1, yc = -1;
	for (int i = 0; i < 51; i++) {
		for (int j = 0; j < 51; j++) {
			if ((2 * (i + j) == x + y) && (2 * (abs(x - i) + abs(y - j)) == x + y)) {
				xc = i;
				yc = j;			
			}
		}
	}
	cout << xc  << " " << yc << endl;
}
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		solve();
	}	
	return 0;
}
