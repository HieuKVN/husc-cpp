#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		int max = a[i][0];
		for (int j = 0; j < m; j++) {
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
		cout << max << " ";
	}
	cout << endl;
	for (int j = 0; j < m; j++) {
		int max2 = a[0][j];
		for (int i = 0; i < n; i++) {
			if (a[i][j] > max2) {
				max2 = a[i][j];
			}
		}
		cout << max2 << " ";
	}
	return 0;
}