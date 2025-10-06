#include <bits/stdc++.h>
using namespace std;

// Tính độ dài dãy Hailstone (Collatz) với 1 ≤ n ≤ 100

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, d = 1;
  cin >> n;

  while (n != 1) {
    d++;
    if (n % 2 == 0) {
      n /= 2;
    } else {
      n = 3 * n + 1;
    }
  }
  cout << d;

  return 0;
}
