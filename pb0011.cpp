#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, s = 0;
    cin >> x;
    if (x >= 10)
        s = x * x * x + 5 * x;
    else
        s = x * x - 2 * x + 4;
    cout << s;
}