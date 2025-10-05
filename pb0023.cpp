#include <bits/stdc++.h>
using namespace std;

// In "YES" nếu n là số lẻ hoặc (n > 0 và có 3 chữ số), ngược lại in "NO"

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n % 2 != 0 || (n > 0 && n >= 100 && n <= 999))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
