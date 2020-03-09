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
	float a = 3, b = 4, fa, k,k1 ,i = 0;
	k = q(a);
	do 
	{
		k1 = a;
		a = (a + b) / 2;
		if (k * q(a) < 0) {
			b = k1;
		}
		k = q(a);
		i++;
	} 
	while (abs(b-a) > 0.0001);
	cout << "Результат равен " << a << endl;
	cout << "Количество итераций " << i;
	return 0;
}
