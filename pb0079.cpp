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
		int s = 0;
		for (int j = 0; j < m; j++) {
			s = s + a[i][j];
		}
		cout << s << " ";
	}
	return 0;
}