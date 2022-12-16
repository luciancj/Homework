#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double S, a, q;
  int i, n;

  cin >> a >> q >> n;

  S = 0;

  for (i = 1; i <= n; i++) {
    S += a;
    a *= q;
  }

  cout << "S=" << fixed << setprecision(6) << S << endl;

  return 0;
}
