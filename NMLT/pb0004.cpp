#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int S = m % 10 + n % 10;
	int P = (m / 1000) * (n / 1000);
	cout << S << endl << P << endl;
	return 0;
}
