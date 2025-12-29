#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		double x;
		cin >> x;
		if (x >= 8.5)
			cout << "A" << " ";
		else if (x >= 8.0)
			cout << "B+" << " ";
		else if (x >= 7.0)
			cout << "B" << " ";
		else if (x >= 6.5)
			cout << "C+" << " ";
		else if (x >= 5.5)
			cout << "C" << " ";
		else if (x >= 5.0)
			cout << "D+" << " ";
		else
			cout << "D" << " ";
	}
	return 0;
}
