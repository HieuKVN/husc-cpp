#include <bits/stdc++.h>
using namespace std;

long long nhuan(long long n) { return n / 4 - n / 100 + n / 400; }

int main() {
	long long t;
	cin >> t;
	while (t--) {
		long long a, b;
		cin >> a >> b;
		cout << nhuan(b) - nhuan(a - 1) << endl;
	}
	return 0;
}
