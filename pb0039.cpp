#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    for (int ga = 1; ga < m; ga++) {
        int cho = m - ga;
        if (2 * ga + 4 * cho == n) {
            cout << "Ga = " << ga << endl;
            cout << "Cho = " << cho << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}