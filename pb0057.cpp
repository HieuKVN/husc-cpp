#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, d = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] % 2 == 0 || (a[i] < 3 && a[i] % 3 == 0))
			d++;
	}
	cout << d << endl;
}