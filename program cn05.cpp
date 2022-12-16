#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) {
    return pow(x, 4) + 2 * x * pow(x, 2) - x - 1;
}

int main() {
    double a, b, c;
    int i, n;

    a = 0;
    b = 1;
    n = 16;

    for (i = 1; i <= n; i++) {
        c = (b + a) / 2;

        cout << "i=" << setw(3) << i << " x=" << setw(10) << fixed << setprecision(8) << c << " f(x)=" << setw(12) << fixed << setprecision(8) << f(c) << endl;

        if (f(c) == 0) {
            break;
        } else if (f(c) * f(a) > 0) {
            a = c;
        } else {
            b = c;
        }
    }

    return 0;
}
