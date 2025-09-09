#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, x;
    cin >> a >> b;
    if (a == 0 && b == 0)
        cout << "Many Solutions";
    else if (a == 0)
        cout << "No Solution";
    else
    {
        x = -b / a;
        if (x == 0)
            x = 0;
        cout << fixed << setprecision(2) << x;
    }
    return 0;
}