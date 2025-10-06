#include <bits/stdc++.h>
using namespace std;

// Cho hai số nguyên có 4 chữ số m, n (m = abcd, n = efgh)
// Tính S = d + h và P = a * e

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int m, n;
  cin >> m >> n;

  int S = m % 10 + n % 10;         // d + h
  int P = (m / 1000) * (n / 1000); // a * e
  cout << S << '\n' << P;

  return 0;
}
