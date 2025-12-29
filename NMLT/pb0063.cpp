#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, d = 0;
	cin >> n;
	int mayman[10] = {4, 7, 16, 28, 44, 47, 49, 64, 74, 77};
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		for (int j = 0; j < 10; j++) {
			if (a[i] == mayman[j]) {
				d++;
			}
		}
	}
	cout << d << endl;
	return 0;
}
