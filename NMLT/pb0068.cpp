#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int dhung[n];
	int dcuong[n];
	for (int i = 0; i < n; i++) {
		cin >> dhung[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> dcuong[i];
	}
	int hung = 0, cuong = 0;
	for (int i = 0; i < n; i++) {
		if (dhung[i] > dcuong[i]) {
			hung++;
		} else if (dhung[i] < dcuong[i]) {
			cuong++;
		} else {
			continue;
		}
	}
	cout << hung << " " << cuong;
	return 0;
}