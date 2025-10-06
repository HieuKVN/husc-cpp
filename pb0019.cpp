#include <bits/stdc++.h>
using namespace std;

// Phân loại tam giác với 3 cạnh a, b, c (1 ≤ a, b, c ≤ 10^9)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c;
  cin >> a >> b >> c;

  if (a == b && b == c) {
    cout << "Tam giac deu";
  } else if (a == b || b == c || a == c) {
    cout << "Tam giac can";
  } else {
    cout << "Tam giac thuong";
  }

  return 0;
}
