#include <bits/stdc++.h>
using namespace std;

long long tonguoc(int n) {
	if (n == 1)
		return 0;
	long long s = 1;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			s += i;
			if (i != n / i)
				s += n / i;
		}
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	if (tonguoc(n) > n)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
