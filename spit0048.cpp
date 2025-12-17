#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;
	string cg[] = {"Than", "Dau", "Tuat", "Hoi", "Ti",	"Suu",
				   "Dan",  "Mao", "Thin", "Ty",	 "Ngo", "Mui"};
	cout << cg[n % 12];
	return 0;
}
