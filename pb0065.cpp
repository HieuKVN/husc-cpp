#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i < n; i++)
        s += a[i] * b[i];
    if (s == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}