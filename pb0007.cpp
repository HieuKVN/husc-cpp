#include <bits/stdc++.h>
using namespace std;

// Tính f(x) = lg^3(a) + cos^5(x) với a = c^4 + k^3, c = sqrt(|x|), in 2 chữ số
// thập phân (1 ≤ x, k ≤ 100)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double x, k;
  cin >> x >> k;

  double c = sqrt(fabs(x));
  double a = pow(c, 4) + pow(k, 3);
  double f = pow(log10(a), 3) + pow(cos(x), 5);
  cout << fixed << setprecision(2) << f;

  return 0;
}
