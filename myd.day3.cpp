#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float fn, result;
	int k;
	fn = 4;
	do {
		result = fn - (2 * fn - log10(fn) - 7) / (2 - 1 / fn / log(10));
		k = (result - fn) * 10000;
		fn = result;
	} while (k > 0);
	cout << result;
	return 0;
}
