#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, k, s, c, a;
    cin >> x >> k;
    c = sqrt(fabs(x));
    a = pow(c, 4) + pow(k, 3);
    s = pow(log10(a), 3) + pow(cos(x), 5);
    cout << fixed << setprecision(2) << s;
    return 0;
}
