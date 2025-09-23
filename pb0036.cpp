#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int l = 0; l < a[i]; l++)
        {
            cout << s;
        }
        cout << endl;
    }
    return 0;
}