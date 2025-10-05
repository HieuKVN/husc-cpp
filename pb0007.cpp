#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double x, k;
    cin >> x >> k;

    double c = sqrt(fabs(x));
    double a = pow(c, 4) + pow(k, 3);
    double f = pow(log10(a), 3) + pow(cos(x), 5);

    cout << fixed << setprecision(2) << f;
    return 0;
}
