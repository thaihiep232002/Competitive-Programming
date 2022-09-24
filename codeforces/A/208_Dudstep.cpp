#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define ll long long 
const string WORD = "WUB";
string n; 

void solve() {
	while(1) {
		int i = n.find(WORD);
		if (i == -1) {
			break;
		}
		n.erase(i, 3);
		if (i > 0 && i != n.size()) {
			n.insert(i, " ");
		}
	}	
	cout << n ;
}

int main() {
	getline(cin, n);
	solve();

	return 0;
}
