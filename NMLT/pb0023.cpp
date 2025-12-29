#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 != 0 || (n > 0 && n >= 100 && n <= 999)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
