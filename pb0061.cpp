#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, s = 0;
	long double d = 0.0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		s += a[i];
	}

	d = (double)s / n;
	cout << fixed << setprecision(2) << d << endl;
}