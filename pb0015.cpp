#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, s, p;
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a)
        cout << "No Solution";
    else
    {
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(4) << s;
    }
    return 0;
}