#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double S, a, q;
    int n;

    cin >> a >> q >> n;

    S = a * (exp(n * log(q)) - 1) / (q - 1);

    cout << "S=" << fixed << setprecision(6) << S << endl;

    return 0;
}
