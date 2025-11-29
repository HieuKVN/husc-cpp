#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double delta = b * b - 4.0 * a * c;
	if (delta < 0) {
		cout << "No Solution" << endl;
	} else if (delta == 0) {
		cout << fixed << setprecision(4) << -b / (2.0 * a) << endl;
	} else {
		cout << fixed << setprecision(4) << (-b + sqrt(delta)) / (2.0 * a) << endl;
		cout << (-b - sqrt(delta)) / (2.0 * a) << endl;
	}
	return 0;
}
