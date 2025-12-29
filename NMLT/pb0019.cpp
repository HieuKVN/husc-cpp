#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a == b && b == c) {
		cout << "Tam giac deu" << endl;
	} else if (a == b || b == c || a == c) {
		cout << "Tam giac can" << endl;
	} else {
		cout << "Tam giac thuong" << endl;
	}
	return 0;
}
