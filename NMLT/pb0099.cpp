#include <bits/stdc++.h>
using namespace std;

long long dq(int m, int n) {
	if (m == 0)
		return n + 1;
	if (n == 0 && m > 0)
		return dq(m - 1, 1);
	return dq(m - 1, dq(m, n - 1));
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << dq(m, n);
	return 0;
}