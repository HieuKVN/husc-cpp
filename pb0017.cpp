#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if (m % n == 0 || n % m == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}