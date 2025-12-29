#include <bits/stdc++.h>
using namespace std;

int main() {
	cout << "<?xml version=1 encoding=UTF-8?>" << endl;
	string s;
	while (getline(cin, s)) {
		string ho, ten, diem;
		stringstream ss(s);
		getline(ss, ho, '|');
		getline(ss, ten, '|');
		getline(ss, diem);
		double mark = stod(diem);
		if (mark >= 5.0) {
			cout << "<Student>" << endl;
			cout << "    <LastName>" << ho << "</LastName>" << endl;
			cout << "    <FirstName>" << ten << "</FirstName>" << endl;
			cout << "    <Mark>" << diem << "</Mark>" << endl;
			cout << "</Student>" << endl;
		}
	}
	return 0;
}
