#include <bits/stdc++.h>
using namespace std;

// Tính diện tích tam giác theo 2 cạnh và góc xen giữa (a, b, α độ)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long double a, b, alpha;
  cin >> a >> b >> alpha;

  const long double pi = 3.14159;
  long double s = 0.5 * a * b * sin(alpha * pi / 180);
  cout << fixed << setprecision(2) << s;

  return 0;
}
