#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int result1, result2, k, n, m, i, j;
	cout << "Enter N" << endl;
	cin >> n;
	cout << "Enter M" << endl;
	cin >> m;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[m];
	}
	for (i = 0;i < m;i++) {
		for (j = 0;j < n;j++) {
			cout << "Array [" << i + 1 << "][" << j + 1 << "]" << endl;
			cin >> array[i][j];
		}
	}
	for (j = 0;j < m;j++) {
		for (i = 0;i < n;i++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
	cout << "Enter K" << endl;
	cin >> k;
	result1 = 0;
		result2 = 1;
	for (i = 0;i < n; i++) {
		result1 = result1 + array[k-1][i];
		result2 = result2 * array[k-1][i];
	}
	cout << "the sum is equal to " << result1 << endl;
	cout << "the product is equal to " << result2 << endl;
	return 0;
}