#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, d = 0;
	cin >> n;
	vector<int> a;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			d++;
			a.push_back(i);
		}
	}
	cout << d << endl;
	for (int x : a) {
		cout << x << " ";
	}
	return 0;
}
