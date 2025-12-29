#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	double tb = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tb += a[i];
	}
	tb /= n;
	cout << setprecision(6) << fixed << tb;
	sort(a, a + n);
	if (n % 2 == 0) {
		cout << endl
			 << setprecision(6) << fixed
			 << (double)(a[n / 2 - 1] + a[n / 2]) / 2;
	} else {
		cout << endl << setprecision(6) << fixed << (double)a[n / 2];
	}
	return 0;
}