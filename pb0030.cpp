#include <bits/stdc++.h>
using namespace std;

int main() {
	double n, m, k, nam, gai;
	cin >> n >> m >> k;
	nam = n / k;
	gai = m / k;
	cout << ceil(nam) + ceil(gai) << endl;
	return 0;
}
