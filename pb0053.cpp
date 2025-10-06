#include <bits/stdc++.h>
using namespace std;

// Đếm số chính phương trong dãy (1 ≤ n ≤ 2×10^5, 1 ≤ ai ≤ 10^9)

bool cp(int n) {
  int k = sqrt(n);
  return k * k == n;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  int d = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (cp(x)) {
      d++;
    }
  }
  cout << d;

  return 0;
}
