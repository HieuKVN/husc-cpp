#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, delta, x, y;
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4 * a * c;
    if (delta < 0)
        cout << "No Solution";
    else if (delta == 0)
    {
        x = -b / (2 * a);
        y = -b / (2 * a);
        cout << fixed << setprecision(4) << x;
    }
    else
    {
        x = (-b + sqrt(delta)) / (2 * a);
        y = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(4) << x << endl;
        cout << fixed << setprecision(4) << y;
    }
    return 0;
}
