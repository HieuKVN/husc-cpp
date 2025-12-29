#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, d = 0, s = 0, gtln = -1000000000;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += a[i];
		if (a[i] > gtln) {
			gtln = a[i];
			d = 1;
		} else if (a[i] == gtln) {
			d++;
		}
	}
	cout << s - (gtln * d) << endl;
	return 0;
}