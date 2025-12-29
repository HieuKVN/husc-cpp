#include <bits/stdc++.h>
using namespace std;

int main() {
	double x;
	cin >> x;
	if (x == -3.0) {
		cout << "Div by zero" << endl;
	} else if (x > 0) {
		cout << fixed << setprecision(6) << x * x + sqrt(x) + 1.0 << endl;
	} else {
		cout << fixed << setprecision(6)
			 << (x * x * x + 2.0 * x + 1.0) / (x + 3.0) << endl;
	}
	return 0;
}
