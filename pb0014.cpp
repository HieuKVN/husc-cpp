#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	if (a == 0 && b == 0) {
		cout << "Many Solutions" << endl;
	} else if (a == 0) {
		cout << "No Solution" << endl;
	} else {
		cout << fixed << setprecision(2) << -b / a << endl;
	}
	return 0;
}
