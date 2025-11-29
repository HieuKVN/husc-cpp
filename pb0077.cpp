#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> L(n + 1);
	L[0] = 2;
	L[1] = 1;
	for (int i = 2; i <= n; i++) {
		L[i] = L[i - 1] + L[i - 2];
	}
	for (int i = 0; i <= n; i++) {
		cout << L[i];
		if (i < n) cout << " ";
	}
	cout << endl;
	return 0;
}
