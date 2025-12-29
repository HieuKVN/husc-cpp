#include <bits/stdc++.h>
using namespace std;

bool cp(int n) {
	int k = sqrt(n);
	return k * k == n;
}

int main() {
	int n;
	cin >> n;
	int d = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (cp(x)) {
			d++;
		}
	}
	cout << d << endl;
	return 0;
}
