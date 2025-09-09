#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double x, s = 0;
    cin >> x;
    if (x == -3)
        cout << "Div by zero";
    else if (x > 0)
    {
        s = x * x + sqrt(x) + 1;
        cout << fixed << setprecision(6) << s;
    }
    else
    {
        s = (x * x * x + 2 * x + 1) / (x + 3);
        cout << fixed << setprecision(6) << s;
    }
    return 0;
}