#include <iostream>
#include <cmath>
using namespace std;
 float q(float a) {
	 float q;
	 q = 2 * a - log10(a) - 7;
	 return(q);
}
int main()
{
	float a, b, fa, fb , k,k3;
	int k1, k2;
	fb = 0;
	a = 3;
	b = 4;
	k = q(a);
	do 
	{
		k3 = a;
		a = (a + b) / 2;
		fa = q(a);
		if (k * fa < 0) {
			b = k3;
		}
		k1 = q(a) * 100;
		k2 = q(b) * 100;
		k = fa;
		cout << a << endl;
	} 
	while (k1 != k2);
	return 0;
}
