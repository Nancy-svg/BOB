#include <iostream>
#include <cmath>
using namespace std;
 float q(float a) {
	 float q;
	 q =(log10(a) + 7)/2;
	 return(q);
}
int main() {
	double fx = 3, fn = 4, k;
int i = 0;
do
{
	fn = q(fx);
	k = abs(fx - fn);
	fx = fn;
	i++;
}
while(k > 0.001);
cout << "Результат равен " << fx << endl;
cout << "Количество итераций " << i;
}
