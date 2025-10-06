#include <bits/stdc++.h>
using namespace std;

// Tính giá trị B theo công thức cho sẵn (|x| ≤ 10^5)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long x;
  cin >> x;

  long long b;
  if (x > 3) {
    b = pow(x, 3) + 2 * pow(x, 2) + 5 * x;
  } else if (x < 1) {
    b = 5 * x - 8;
  } else {
    b = pow(x, 2) - 2 * x + 4;
  }
  cout << b;

  return 0;
}
