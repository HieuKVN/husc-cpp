#include <bits/stdc++.h>
using namespace std;

long long tong(long long n) {
	long long s = 0;
	while (n) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

int main() {
	long long n;
	cin >> n;
	if (n % tong(n) == 0) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}
