#include <bits/stdc++.h>
using namespace std;

long long dq(int n) {
	if (n == 0)
		return 0;
	return dq(n - 1) + n;
}

int main() {
	int n;
	cin >> n;
	cout << dq(n);
	return 0;
}