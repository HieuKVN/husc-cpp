#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			if (i == j) {
				if (a[i][j] != 1) {
					cout << "No";
					return 0;
				}
			} else {
				if (a[i][j] != 0) {
					cout << "No";
					return 0;
				}
			}
		}
	}
	cout << "Yes";
	return 0;
}