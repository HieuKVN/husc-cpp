#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int d = 1;
	while (n != 1) {
		d++;
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = 3 * n + 1;
		}
	}
	cout << d << endl;
	return 0;
}
