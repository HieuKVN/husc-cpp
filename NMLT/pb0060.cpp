#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	int dem = 1;
	for (int i = 1; i < n; i++) {
		if (a[i] == a[i - 1]) {
			dem++;
		} else {
			if (dem % 2 == 1)
				cout << a[i - 1] << ' ';
			dem = 1;
		}
	}
	if (dem % 2 == 1)
		cout << a[n - 1];
	return 0;
}