#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, L;
	cin >> n >> L;
	long long a[n - 1];
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
	}
	sort(a, a + n - 1);
	if (a[0] > L) {
		cout << L << endl;
		return 0;
	}
	for (int i = 0; i < n - 2; i++) {
		if (a[i + 1] > a[i] + 1) {
			cout << a[i] + 1 << endl;
			return 0;
		}
	}
	return 0;
}
