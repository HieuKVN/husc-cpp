#include <bits/stdc++.h>
using namespace std;

int tonguoc(int n) {
	int s = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}

int main() {
	int n;
	int a[n];
	cin >> n;
	if (tonguoc(n) == n) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}