#include <bits/stdc++.h>
using namespace std;

// Tìm đoạn giao nhau giữa hai đoạn [L1, R1] và [L2, R2], in -1 nếu không giao

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long L1, R1, L2, R2;
  cin >> L1 >> R1 >> L2 >> R2;

  long long left = max(L1, L2);
  long long right = min(R1, R2);
  if (left <= right) {
    cout << left << ' ' << right;
  } else {
    cout << -1;
  }

  return 0;
}
