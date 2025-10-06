#include <bits/stdc++.h>
using namespace std;

// Tính số thỏ tối đa chắc chắn nằm cùng một hang (nguyên lý Dirichlet)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, m;
  cin >> n >> m;

  cout << (m + n - 1) / n;

  return 0;
}
