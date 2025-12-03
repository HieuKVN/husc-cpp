#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int h = n / 3600;
	int m = (n % 3600) / 60;
	int s = n % 60;
	cout << setw(2) << setfill('0') << h << ':' << setw(2) << setfill('0') << m
		 << ':' << setw(2) << setfill('0') << s << endl;
	return 0;
}
