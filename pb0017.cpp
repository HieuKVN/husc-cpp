#include <bits/stdc++.h>
using namespace std;

// Kiểm tra m và n có là bội số của nhau hay không (1 ≤ m, n ≤ 10^18)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long m, n;
    cin >> m >> n;

    if (m % n == 0 || n % m == 0)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
