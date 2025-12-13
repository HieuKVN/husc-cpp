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

long long tich(long long n) {
	long long s = 1;
	while (n) {
		s *= n % 10;
		n /= 10;
	}
	return s;
}

int main() {
	long long n;
	cin >> n;
	double kq = (double)tich(n) / tong(n);
	cout << fixed << setprecision(3) << kq;
	return 0;
}
