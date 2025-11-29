#include <bits/stdc++.h>
using namespace std;

bool canbang(int a1, int a2, int a3, int a4) {
    if (a1 + a3 == a2 + a4) {
        return true;
    }
    if (a1 + a2 == a3 + a4) {
        return true;
    }
    if (a1 + a4 == a2 + a3) {
        return true;
    }
    return false;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a1, a2, a3, a4, b;
        cin >> a1 >> a2 >> a3 >> a4 >> b;
        if (canbang(a1 + b, a2, a3, a4) || canbang(a1, a2 + b, a3, a4) || canbang(a1, a2, a3 + b, a4) || canbang(a1, a2, a3, a4 + b)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}