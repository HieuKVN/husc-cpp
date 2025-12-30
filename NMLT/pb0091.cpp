#include <bits/stdc++.h>
using namespace std;

bool arm(int n) {
	int temp = n, s = 0, d = 0;
	while (temp) {
		d++;
		temp /= 10;
	}
	temp = n;
	while (temp) {
		s += pow(temp % 10, d);
		temp /= 10;
	}
	return s == n;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int d = 0;
	for (int i = 0; i < n; i++) {
		if (arm(a[i])) {
			d++;
		}
	}
	cout << d;
	return 0;
}