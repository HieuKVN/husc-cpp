#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h = 0, m = 0, s = 0;
    cin >> n;
    h = n / 3600;
    m = (n % 3600) / 60;
    s = n % 60;
    cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << ":" << setw(2) << setfill('0') << s;
    return 0;
}