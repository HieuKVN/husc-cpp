#include <bits/stdc++.h>
using namespace std;

int main() {
	string st;
	while (getline(cin, st)) {
		int up = 0, low = 0;
		for (char c : st) {
			if (isupper(c))
				up++;
			else if (islower(c))
				low++;
		}
		if (up > low) {
			transform(st.begin(), st.end(), st.begin(), ::toupper);
		} else {
			transform(st.begin(), st.end(), st.begin(), ::tolower);
		}
		cout << st << '\n';
	}
	return 0;
}
