#include <bits/stdc++.h>
using namespace std;

int main() {
	long long L1, R1, L2, R2;
	cin >> L1 >> R1 >> L2 >> R2;
	long long left = max(L1, L2);
	long long right = min(R1, R2);
	if (left <= right) {
		cout << left << ' ' << right << endl;
	} else {
		cout << "-1" << endl;
	}
	return 0;
}
