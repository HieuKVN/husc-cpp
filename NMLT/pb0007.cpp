#include <bits/stdc++.h>
using namespace std;

int main() {
	double x, k;
	cin >> x >> k;
	double c = sqrt(fabs(x));
	double a = c * c * c * c + k * k * k;
	double f = pow(log10(a), 3) + pow(cos(x), 5);
	cout << fixed << setprecision(2) << f << endl;
	return 0;
}
