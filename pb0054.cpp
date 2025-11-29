#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, am = 0, duong = 0, chan = 0, le = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x < 0) {
			am++;
		} else if (x > 0) {
			duong++;
		}
		if (x % 2 == 0) {
			chan++;
		} else {
			le++;
		}
	}
	cout << am << endl << duong << endl << chan << endl << le << endl;
	return 0;
}
