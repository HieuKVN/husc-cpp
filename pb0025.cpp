#include <bits/stdc++.h>

using namespace std;

int main()
{
    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;

    int left = max(L1, L2);
    int right = min(R1, R2);

    if (left <= right)
    {
        cout << left << " " << right << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
