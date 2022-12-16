#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
  double t, x0, k, m, x;

  cin >> x0 >> k >> m >> t;

  x = x0 * cos(sqrt(k / m * t));

  cout << "x=" << fixed << setprecision(6) << x << endl;

  return 0;
}
