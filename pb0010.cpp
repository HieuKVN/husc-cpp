#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, alpha;
	cin >> a >> b >> alpha;
	const double pi = acos(-1.0);
	double s = 0.5 * a * b * sin(alpha * pi / 180.0);
	cout << fixed << setprecision(2) << s << endl;
	return 0;
}
