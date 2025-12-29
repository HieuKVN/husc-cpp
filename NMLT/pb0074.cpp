#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			b[k] = a[i];
			k++;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			b[k] = a[i];
			k++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
