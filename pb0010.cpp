#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double a, b, x;
    cin >> a >> b >> x;
    const long double pi = 3.14159;
    long double s = 0.5 * a * b * sin(x * pi / 180);
    cout << fixed << setprecision(2) << s;
    return 0;
}
