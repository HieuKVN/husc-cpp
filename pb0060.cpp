#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int dem = 1;
	for (int i = 1; i <= n; i++) {
		if (a[i] == a[i - 1]) {
			dem++;
		} else {
			if (dem % 2 != 0) {
				cout << a[i - 1];
			}
			dem = 1;
		}
	}
	return 0;
}