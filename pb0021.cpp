#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;
	int doorMin = min(x, y);
	int doorMax = max(x, y);
	if ((min(a, b) <= doorMin && max(a, b) <= doorMax) ||
			(min(a, c) <= doorMin && max(a, c) <= doorMax) ||
			(min(b, c) <= doorMin && max(b, c) <= doorMax)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
