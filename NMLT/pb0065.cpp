#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	long long s = 0;
	for (int i = 0; i < n; i++) {
		s += (long long)a[i] * b[i];
	}
	if (s == 0) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}