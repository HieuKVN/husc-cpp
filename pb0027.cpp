#include <bits/stdc++.h>
using namespace std;

// Tính hai chữ số cuối của tích a × b × c × d

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  long long result = 1;
  result = (result * (a % 100)) % 100;
  result = (result * (b % 100)) % 100;
  result = (result * (c % 100)) % 100;
  result = (result * (d % 100)) % 100;
  cout << setw(2) << setfill('0') << result;

  return 0;
}
