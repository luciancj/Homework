#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

double f(double x) {
    return 6 * cos(x) + 8 * sin(x);
}

int main() {
    double a = 2;
    double b = 4;
    double eps = 0.00017;

    while (abs(b - a) >= eps) {
        double c = (b + a) / 2;
        cout << "x = " << c << setw(10) << fixed << setprecision(8) << " f(x) = " << f(c) << setprecision(8) << endl;

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
