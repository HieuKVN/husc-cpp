#include <bits/stdc++.h>
using namespace std;

// Giải phương trình bậc nhất a*x + b = 0 với |a|, |b| ≤ 10^9

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double a, b;
  cin >> a >> b;

  if (a == 0 && b == 0) {
    cout << "Many Solutions";
  } else if (a == 0) {
    cout << "No Solution";
  } else {
    double x = -b / a;
    if (x == 0) {
      x = 0;
    }
    cout << fixed << setprecision(2) << x;
  }

  return 0;
}
