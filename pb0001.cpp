#include <bits/stdc++.h>
using namespace std;

// Thực hiện các phép toán +, -, *, /, % trên hai số nguyên a, b (0 ≤ a ≤ 10^4;
// 1 ≤ b ≤ 10^4)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b;
  cin >> a >> b;

  cout << a << " + " << b << " = " << a + b << '\n';
  cout << a << " - " << b << " = " << a - b << '\n';
  cout << a << " * " << b << " = " << a * b << '\n';
  cout << a << " / " << b << " = " << a / b << '\n';
  cout << a << " % " << b << " = " << a % b;
  return 0;
}
