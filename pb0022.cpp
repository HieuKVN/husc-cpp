#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool c1 = (n % 2 == 0);
	bool c2 = (n < 0 && n % 3 == 0);
	if ((c1 && !c2) || (!c1 && c2)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
