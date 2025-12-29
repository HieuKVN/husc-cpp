#include <bits/stdc++.h>
using namespace std;

int main() {
	double n, p, m, thang = 0, temp;
	cin >> n >> p >> m;
	temp = n;
	while (temp < m) {
		temp *= (1 + p / 100);
		thang++;
	}

	cout << thang;
	return 0;
}