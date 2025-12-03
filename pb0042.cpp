#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	long double s = 0.0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		s += 1.0 / i;
	}
	cout << fixed << setprecision(6) << s << "\n";
	return 0;
}