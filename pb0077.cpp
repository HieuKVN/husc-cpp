#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i;
    vector<long long> a;
    cin >> n;
    for (i = 0; i < n + 1; i++)
    {
        if (i == 0)
            a.push_back(2);
        else if (i == 1)
            a.push_back(1);
        else
            a.push_back(a[i - 1] + a[i - 2]);
    }
    for (i = 0; i < (int)a.size(); i++)
        cout << a[i] << " ";
    return 0;
}