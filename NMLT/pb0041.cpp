#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, s = 1;
	cin >> n;
	if (n == 1 || n == 0) {
		cout << "1" << endl;
		return 0;
	}
	if (n % 2 != 0) {
		for (int i = 1; i <= n; i += 2)
			s *= i;
	} else {
		for (int i = 2; i <= n; i += 2)
			s *= i;
	}
	cout << s << endl;
	return 0;
}