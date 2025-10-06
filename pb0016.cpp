#include <bits/stdc++.h>
using namespace std;

// Giải phương trình bậc hai ax² + bx + c = 0 (a ≠ 0), in nghiệm với 4 chữ số
// thập phân hoặc "No Solution"

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double a, b, c;
  cin >> a >> b >> c;

  double delta = b * b - 4 * a * c;

  if (delta < 0) {
    cout << "No Solution";
  } else if (delta == 0) {
    cout << fixed << setprecision(4) << -b / (2 * a);
  } else {
    cout << fixed << setprecision(4) << (-b + sqrt(delta)) / (2 * a) << '\n'
         << (-b - sqrt(delta)) / (2 * a);
  }

  return 0;
}
