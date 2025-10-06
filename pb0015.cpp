#include <bits/stdc++.h>
using namespace std;

// Tính diện tích tam giác theo công thức Heron (a, b, c là cạnh tam giác)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double a, b, c;
  cin >> a >> b >> c;

  if (a + b <= c || a + c <= b || b + c <= a) {
    cout << "No Solution";
  } else {
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(4) << s;
  }

  return 0;
}
