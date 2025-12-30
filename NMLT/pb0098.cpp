#include <bits/stdc++.h>
using namespace std;

long long dq(int n, int a, int b, int c) {
	if (n == 0)
		return a;
	return dq(n - 1, a, b, c) + b * n + c;
}

int main() {
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	cout << dq(n, a, b, c);
	return 0;
}