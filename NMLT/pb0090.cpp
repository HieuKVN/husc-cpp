#include <bits/stdc++.h>
using namespace std;

string nhiphan(long long x) {
	string kq = "";
	char ch;
	while (x > 0) {
		ch = x % 2 + '0';
		kq = ch + kq;
		x = x / 2;
	}
	return kq;
}

bool doixung(string s) {
	string tam = s;
	reverse(tam.begin(), tam.end());
	return s == tam;
}

int main() {
	long long n;
	cin >> n;

	if (n <= 0) {
		cout << "NO";
		return 0;
	}

	string s = nhiphan(n);

	if (doixung(s))
		cout << "YES";
	else
		cout << "NO";
}
