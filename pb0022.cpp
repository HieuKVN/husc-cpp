#include <bits/stdc++.h>
using namespace std;

// In "Yes" nếu n chẵn hoặc (âm và chia hết cho 3) đúng duy nhất một điều kiện,
// ngược lại "No"

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  bool c1 = (n % 2 == 0);
  bool c2 = (n < 0 && n % 3 == 0);
  cout << ((c1 ^ c2) ? "Yes" : "No");

  return 0;
}
