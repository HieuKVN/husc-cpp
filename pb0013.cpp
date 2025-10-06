#include <bits/stdc++.h>
using namespace std;

// Tính giá trị C theo công thức đề cho

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long double x;
  cin >> x;

  if (x == -3) {
    cout << "Div by zero";
  } else if (x > 0) {
    cout << fixed << setprecision(6) << x * x + sqrt(x) + 1;
  } else {
    cout << fixed << setprecision(6) << (x * x * x + 2 * x + 1) / (x + 3);
  }

  return 0;
}
