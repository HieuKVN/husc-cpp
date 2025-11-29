#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p;
	cin >> n >> p;
	int toa = (n + p * 4 - 1) / (p * 4);
	cout << toa << endl;
	return 0;
}
