#include <bits/stdc++.h>
using namespace std;

long long dq(int n) {
	if (n <= 100)
		return dq(dq(n + 11));
	return n - 10;
}

int main() {
	int n;
	cin >> n;
	cout << dq(n);
	return 0;
}