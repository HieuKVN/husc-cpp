#include <bits/stdc++.h>
using namespace std;

bool cp(int n)
{
    if (n < 0)
        return false;
    int k = sqrt(n);
    return k * k == n;
}

int main()
{
    int n, x;
    cin >> n;
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (cp(x))
            d++;
    }
    cout << d << endl;
    return 0;
}
