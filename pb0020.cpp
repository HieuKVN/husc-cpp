#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	const double eps = 1e-9;
	if (fabs(a - b) < eps && fabs(b - c) < eps) {
		cout << "Tam giac deu" << endl;
	} else if (fabs(a - b) < eps || fabs(b - c) < eps || fabs(a - c) < eps) {
		cout << "Tam giac can" << endl;
	} else {
		cout << "Tam giac thuong" << endl;
	}
	return 0;
}
