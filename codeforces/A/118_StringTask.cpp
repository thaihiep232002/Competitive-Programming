#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

#define ll long long
#define ar array

const vector<char> vowels = { 'a' , 'o', 'y', 'e', 'u', 'i' }; 

int n, m, N[999999];
string str;
char lower(char temp) {
	if (temp >= 'A' && temp <= 'Z') {
		temp += 32;
	}
	return temp;
}

void solve() {
	for (int i = 0; i < str.size(); i++) {
		str[i] = lower(str[i]);
	}
	for (int i = 0; i < str.size(); i++) {
		int flag = 0;
		for (char vowel : vowels) {
			if (str[i] == vowel) {
				str.erase(i, 1);
				flag = 1;
				continue;
			}
		}
		if (flag == 1) {
			i--;
		}
	}	
	for (int i = 0; i < str.size(); i+=2) {
		str.insert(i, ".");
	}
	cout << str;
}


int main() {
	getline(cin, str);
	solve();
	return 0;
}
