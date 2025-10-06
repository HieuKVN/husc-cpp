#include <bits/stdc++.h>
using namespace std;

// Thực hiện các phép toán +, -, *, /, % trên hai số nguyên a, b (|a|, |b| ≤
// 10^9, b ≠ 0)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long a, b;
  cin >> a >> b;

  cout << a << " + " << b << " = " << a + b << '\n';
  cout << a << " - " << b << " = " << a - b << '\n';
  cout << a << " * " << b << " = " << a * b << '\n';
  cout << a << " / " << b << " = " << a / b << '\n';
  cout << a << " % " << b << " = " << a % b;
  return 0;
}
