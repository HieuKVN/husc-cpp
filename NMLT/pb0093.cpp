#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, n;
	cin >> x >> n;
	long long s = 0, bd = x * x;
	for (int i = 2; i <= n; i += 2) {
		s += bd;
		bd *= (x * x);
	}
	cout << s;
	return 0;
}