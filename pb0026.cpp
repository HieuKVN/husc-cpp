#include <bits/stdc++.h>
using namespace std;

// Đổi số giây n (0 ≤ n ≤ 86399) thành định dạng hh:mm:ss

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int h = n / 3600;
    int m = (n % 3600) / 60;
    int s = n % 60;

    cout << setw(2) << setfill('0') << h << ':'
         << setw(2) << setfill('0') << m << ':'
         << setw(2) << setfill('0') << s;

    return 0;
}
