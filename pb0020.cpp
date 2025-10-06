#include <bits/stdc++.h>
using namespace std;

// Phân loại tam giác với 3 cạnh a, b, c (số thực, chính xác đến 9 chữ số)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  double a, b, c;
  cin >> a >> b >> c;

  const double eps = 1e-9;
  if (fabs(a - b) < eps && fabs(b - c) < eps) {
    cout << "Tam giac deu";
  } else if (fabs(a - b) < eps || fabs(b - c) < eps || fabs(a - c) < eps) {
    cout << "Tam giac can";
  } else {
    cout << "Tam giac thuong";
  }

  return 0;
}
