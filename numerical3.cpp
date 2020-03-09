#include <iostream>
#include <cmath>
using namespace std;
double q(double x) {
    return 2 * x - log10(x) - 7;
}
int main()
{
    double xn = 3, x,b = 4,p = 0.0001;
    int i = 0;
    do {
        x = xn;
        xn = x - (b - x) / (q(b) - q(x)) * q(x);
        i++;
    } while (abs(q(xn) - q(x)) > p);
    cout << "Результат равен " << xn << endl;
	cout << "Количество итераций " << i;
}
