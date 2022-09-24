#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
int n, N[100000], M[100000];
void solve() {
	int res = 0;
	sort(N, N + n);
	for (int i = 0; i < n; i++) {
		if (M[i] == 0) {
			M[i] = 1; 
			int sum = N[i];
			for (int j = n - 1; j > i; j--) {
				if (M[j] != 1 && N[j] + sum <= 4) {
					sum += N[j];
					M[j] = 1;
				}			
			}
			res++;
		}
	}
	
	cout << res;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> N[i];
		M[i] = 0;
	}
	solve();


	return 0;
}
