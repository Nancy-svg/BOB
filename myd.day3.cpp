#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float fn, result;
	int k , i = 0;;
	result = 4;
	do {
	    fn = result;
		result = fn - (2 * fn - log10(fn) - 7) / (2 - 1 / fn / log(10));
		i++;
	} while (abs(result - fn) > 0.00001);
	cout << "Результат равен " << result << endl;
	cout << "Количество итераций " << i;
	return 0;
}
