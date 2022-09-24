#include <iostream>

using namespace std;

#define ll long long

string value;

void solve() {
	int flag = 1;
	for (int i = 1; i < value.size(); i++) {
		if (value[i] < 'A' || value[i] > 'Z') {
			flag = 0;
		}
	}
	if (flag == 1) {
		if (value[0] >= 'A' && value[0] <= 'Z') {
			for (int i = 0; i < value.size(); i++) {
				value[i] += 32;
			}
		}
		else {
			value[0] -= 32;
			for (int i = 1; i< value.size(); i++) {
				value[i] += 32;
			}
		}
	}
	cout << value ;
}


int main() {
	getline(cin, value);
	solve();
	return 0;
}
