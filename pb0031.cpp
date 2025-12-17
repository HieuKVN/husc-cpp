#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a1, a2, a3, a4, b;
		cin >> a1 >> a2 >> a3 >> a4 >> b;
		bool canbang = false;
		if (a1 == a2 && a2 == a3 && a3 == a4) {
			canbang = true;
		} else if (a2 == a3 && a3 == a4 && a1 + b == a2) {
			canbang = true;
		} else if (a1 == a3 && a3 == a4 && a2 + b == a1) {
			canbang = true;
		} else if (a1 == a2 && a2 == a4 && a3 + b == a1) {
			canbang = true;
		} else if (a1 == a2 && a2 == a3 && a4 + b == a1) {
			canbang = true;
		}
		if (canbang) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
	return 0;
}
