#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x, d = 1;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (x > a[i]) {
			d++;
		} else {
			break;
		}
	}
	cout << d;
	return 0;
}