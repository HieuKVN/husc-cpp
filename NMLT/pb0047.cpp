#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, s = 0;
	while (cin >> x) {
		if (x == -1)
			break;
		s += x;
	}
	cout << s;
	return 0;
}
