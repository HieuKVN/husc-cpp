#include <bits/stdc++.h>
using namespace std;

// Đếm số phần tử âm, dương, chẵn, lẻ trong dãy A (1 ≤ n ≤ 2×10^5, |ai| ≤ 10^9)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, am = 0, duong = 0, chan = 0, le = 0;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x < 0) {
      am++;
    } else if (x > 0) {
      duong++;
    }
    if (x % 2 == 0) {
      chan++;
    } else {
      le++;
    }
  }
  cout << am << '\n' << duong << '\n' << chan << '\n' << le;

  return 0;
}
