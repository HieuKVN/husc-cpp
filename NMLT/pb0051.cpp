#include <bits/stdc++.h>
using namespace std;

int main() {
	long long h, a, b, temp = 0, day = 0;
	cin >> h >> a >> b;
	if (a >= h) {
		cout << 1;
		return 0;
	}
	if (a <= b) {
		cout << -1;
		return 0;
	}
	while (true) {
		day++;
		temp += a;
		if (temp >= h) {
			cout << day;
			return 0;
		}
		temp -= b;
	}
	return 0;
}