#include <bits/stdc++.h>
using namespace std;

int net(char c) {
	switch (c) {
	case 'A':
		return 2;
	case 'F':
		return 1;
	case 'H':
		return 2;
	case 'I':
		return 1;
	case 'K':
		return 2;
	case 'M':
		return 3;
	case 'N':
		return 2;
	case 'P':
		return 1;
	case 'R':
		return 2;
	case 'T':
		return 1;
	case 'V':
		return 1;
	case 'W':
		return 2;
	case 'Y':
		return 1;
	}
	return 0;
}

int main() {
	string s;
	int d = 0;
	cin >> s;
	for (char c : s) {
		d += net(c);
	}
	cout << d;
	return 0;
}
