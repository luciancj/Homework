#include <iostream>
#include <cmath>
#include <iomanip>

double f(double x)
{
    return log(x * sin(x));
}

int main()
{
    double a = 0.5, b = 1.5, c, x, e;
    int n = 10, i;

    c = a - (f(a) / (f(b) - f(a)) * (b - a));

    if (f(c) * f(a) > 0)
    {
        e = b;
        x = a;
    }
    else
    {
        e = a;
        x = b;
    }

    for (i = 1; i <= n; i++)
    {
        x = x - (f(x) / (f(e) - f(x)) * (e - x));
        std::cout << "x = " << x << std::setw(10) << std::fixed << std::setprecision(8);
        std::cout << "f(x) = " << f(x) << std::setprecision(8) << std::endl;
    }

    return 0;
}
