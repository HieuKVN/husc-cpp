#include <bits/stdc++.h>
using namespace std;

// In dãy số Lucas từ L0 đến Ln (1 ≤ n ≤ 80)

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  long long L[81];
  L[0] = 2;
  L[1] = 1;
  for (int i = 2; i <= n; i++) {
    L[i] = L[i - 1] + L[i - 2];
  }
  for (int i = 0; i <= n; i++) {
    cout << L[i] << " ";
  }

  return 0;
}
