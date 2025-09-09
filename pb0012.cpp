#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, s = 0;
    cin >> x;
    if (x > 3)
        s = x * x * x + 2 * x * x + 5 * x;
    else if (x < 1)
        s = 5 * x - 8;
    else
        s = x * x - 2 * x + 4;
    cout << s;
    return 0;
}