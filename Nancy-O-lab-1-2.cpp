#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	float x1, x2, x, d ,a, b, c;
	cout << "y=ax^2+bx+c" << endl;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	cout << "Enter c" << endl;
	cin >> c;
	d = b * b - 4 * a * c;
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "x1=" << x1 << endl;
		cout << "x2=" << x2 << endl;
	} 
	else if (d == 0) { x = (-b) / (2 * a);
	cout << "x=" << x << endl;
	}
	else { cout << "the equation has no roots" << endl; }
	return 0;
}
