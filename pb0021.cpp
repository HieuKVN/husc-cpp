#include <bits/stdc++.h>
using namespace std;

// Kiểm tra xem tủ a×b×c có thể lọt qua cửa x×y không (được phép xoay)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int a, b, c, x, y;
  cin >> a >> b >> c >> x >> y;

  int doorMin = min(x, y), doorMax = max(x, y);
  if ((min(a, b) <= doorMin && max(a, b) <= doorMax) ||
      (min(a, c) <= doorMin && max(a, c) <= doorMax) ||
      (min(b, c) <= doorMin && max(b, c) <= doorMax)) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}
