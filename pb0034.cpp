#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    string us = n;
    reverse(us.begin(), us.end());
    if (us == n) {
    	cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}