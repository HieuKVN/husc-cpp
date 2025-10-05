#include <bits/stdc++.h>
using namespace std;

// Tính f(x) = sin(x) + sqrt(log_4(3x)) + ceil(3*e^x), in 6 chữ số thập phân

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x;
    cin >> x;

    double f = sin(x) + sqrt(log(3 * x) / log(4)) + ceil(3 * exp(x));
    cout << fixed << setprecision(6) << f;
    return 0;
}
