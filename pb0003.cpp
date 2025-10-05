#include <bits/stdc++.h>
using namespace std;

// Tính X = a*b - c*d với a, b, c, d là số nguyên (|a|,|b|,|c|,|d| ≤ 10^9)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << "Difference = " << (a * b - c * d);
    return 0;
}
