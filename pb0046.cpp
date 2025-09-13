#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, d = 1;
    cin >> n;
    while (n != 1)
    {
        d++;
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
    }
    cout << d;
    return 0;
}
