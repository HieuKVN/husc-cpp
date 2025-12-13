#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long a[n + 1];
	a[0] = 2;
	a[1] = 1;
	if (n == 1) {
		cout << 2 << " " << 1;
	} else {
		for (int i = 2; i <= n; i++) {
			a[i] = a[i - 2] + a[i - 1];
		}
		for (int i = 0; i <= n; i++) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
