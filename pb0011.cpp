#include <bits/stdc++.h>
using namespace std;

int main() {
	long long x;
	cin >> x;
	long long a;
	if (x >= 10) {
		a = x * x * x + 5 * x;
	} else {
		a = x * x - 2 * x + 4;
	}
	cout << a << endl;
	return 0;
}
