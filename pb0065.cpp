#include <bits/stdc++.h>
using namespace std;

// Kiểm tra tích vô hướng của hai vector A, B (|ai|, |bi| ≤ 100; 1 ≤ n ≤ 10^5)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    long long s = 0;
    for (int i = 0; i < n; i++)
        s += a[i] * b[i];

    if (s == 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
