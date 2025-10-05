#include <bits/stdc++.h>
using namespace std;

// Tính tổng S = 1 + 2 + ... + n (1 ≤ n ≤ 10^7)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    long long s = n * (n + 1) / 2;

    cout << s;
    return 0;
}
