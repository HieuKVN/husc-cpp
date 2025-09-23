#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, am = 0, duong = 0, chang = 0, le = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            am++;
        if (a[i] > 0)
            duong++;
        if (a[i] % 2 == 0)
            chang++;
        else
            le++;
    }
    cout << am << endl
         << duong << endl
         << chang << endl
         << le;
    return 0;
}