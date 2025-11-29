#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "No Solution" << endl;
	} else {
		double p = (a + b + c) / 2.0;
		double s = sqrt(p * (p - a) * (p - b) * (p - c));
		cout << fixed << setprecision(4) << s << endl;
	}
	return 0;
}
