#include <bits/stdc++.h>
using namespace std;

long long fmn(int m, int n) {
	if (m == 0) {
		return 1;
	} else if (m == n) {
		return 1;
	} else {
		return fmn(m - 1, n - 1) + fmn(m, n - 1);
	}
}

int main() {
	int m, n;
	cin >> m >> n;
	cout << fmn(m, n);
	return 0;
}
