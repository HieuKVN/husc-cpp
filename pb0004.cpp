#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;
    cout << (m % 10 + n % 10) << endl;
    cout << ((m / 1000 % 10) * (n / 1000 % 10)) << endl;
    return 0;
}