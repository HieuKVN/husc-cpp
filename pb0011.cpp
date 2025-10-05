#include <bits/stdc++.h>
using namespace std;

// Tính giá trị A theo công thức cho sẵn (|x| ≤ 10^5)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;

    long long a;
    if (x >= 10)
        a = x * x * x + 5 * x;
    else
        a = x * x - 2 * x + 4;

    cout << a;
    return 0;
}
