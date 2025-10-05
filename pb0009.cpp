#include <bits/stdc++.h>
using namespace std;

// Tính khoảng cách Euclide giữa hai điểm (x1, y1) và (x2, y2)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    cout << fixed << setprecision(9) << d;

    return 0;
}
