#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<tuple>
using namespace std;

#define ll long long
#define ar array

int main() {
	vector<char> v(3);
	v[0] = 'H';
	v[1] = 'Q';
	v[2] = '9';
	string s; getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		for (char u : v) {
			if (u == s[i]) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
		


	return 0;
}
