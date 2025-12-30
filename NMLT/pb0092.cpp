#include <bits/stdc++.h>
using namespace std;

bool snt(long long n) {
	if (n < 2)
		return false;
	for (long long i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

long long dn(long long n) {
	long long res = 0;
	while (n > 0) {
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;
		if (snt(dn(n)))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
