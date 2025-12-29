#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	double a[n], s = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<double>());
	for (int i = 0; i < t; i++) {
		s += a[i];
	}
	cout << fixed << setprecision(2) << s;
	return 0;
}