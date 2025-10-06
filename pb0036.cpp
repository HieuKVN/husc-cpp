#include <bits/stdc++.h>
using namespace std;

// In ký hiệu s lặp lại xi lần cho n số (1 ≤ n ≤ 50, 1 ≤ xi ≤ 100)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  char s;
  int n;
  cin >> s >> n;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    for (int j = 0; j < x; j++) {
      cout << s;
    }
    cout << '\n';
  }

  return 0;
}
