#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x;
	cin >> x;
	long long b;
	if (x > 3) {
		b = x * x * x + 2 * x * x + 5 * x;
	} else if (x < 1) {
		b = 5 * x - 8;
	} else {
		b = x * x - 2 * x + 4;
	}
	cout << b << endl;
	return 0;
}
