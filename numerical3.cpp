#include <iostream>
#include <cmath>
using namespace std;
double func(double x) {
    return 2 * x - log10(x) - 7;
}
int main()
{
    double xn = 3, x,b = 4,p = 0.0001, fa, fb;
    do {
        x = xn;
        xn = x - (b - x) / (func(b) - func(x)) * func(x);
    } while (abs(func(xn) - func(x)) > p);
    cout << x;
}

