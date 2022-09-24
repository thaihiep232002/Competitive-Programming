#include <iostream>

using namespace std;

int main() {
	string n;
	getline(cin, n);
	int m = stoi(n);
	for (int i = 0; i < m; i++) {
		string bf;
		getline(cin, bf);
		if (bf.size() > 10) {
			string too_long = bf.substr(1, bf.size() - 2);
			string res = bf[0] + to_string(too_long.size()) + bf[bf.size() - 1]; 
			cout << res << endl;
		}
		else {
			cout << bf << endl;
		}
	}


	return 0;
}
