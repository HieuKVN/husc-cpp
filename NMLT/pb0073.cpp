#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	int a[n];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] != a[n - i + 1]) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
}
