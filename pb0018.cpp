#include <bits/stdc++.h>
using namespace std;

// Tính số toa tàu cần có để chở hết n khách (1 ≤ n ≤ 10^5, 1 ≤ p ≤ 2×10^4)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p;
    cin >> n >> p;

    int toa = (n + p * 4 - 1) / (p * 4);

    cout << toa;
    return 0;
}
