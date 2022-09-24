#include <iostream>
#include <algorithm>


using namespace std;

#define ll long long
int n, s, x, y, d, N[99999], M[99999];


void solve(){
	for (int i = 0; i < s - 1; i++) {
		for (int j = i + 1; j < s; j++) {
			if (N[j] < N[i]) {
				swap(N[i], N[j]);
				swap(M[i], M[j]);
			}
		}
	}

	for (int i = 0; i < s; i++) {
		if (n > N[i]) {
			n += M[i];
		}else {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
}

int main() {
	cin >> n;
	cin >> s;
	for (int i = 0; i < s; i++) {
		cin >> N[i]; cin >> M[i];
	}	
	solve();

	return 0;
}
