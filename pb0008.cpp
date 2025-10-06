#include <bits/stdc++.h>
using namespace std;

// Tính diện tích hình tròn với bán kính r (pi = 3.141592653)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double r;
  cin >> r;

  const double pi = 3.141592653;
  cout << fixed << setprecision(9) << pi * r * r;

  return 0;
}
