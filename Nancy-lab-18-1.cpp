#include <iostream>   
#include <cmath>
using namespace std;

int main()
{
	int a, b, n, i, j;
	cout << "Enter N" << endl;
	cin >> n;


	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[n];
	}
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++) {
			cout << "Array [" << i + 1 << "][" << j + 1 << "]" << endl;
			cin >> array[i][j];
		}
	}
	for (j = 0;j < n;j++) {
		for (i = 0;i < n;i++) {
			cout << array[j][i] << " ";
		}
		cout << endl;
	}
	a = n * n;
	n = n - 1;
	j = 0;
	i = 0;
	do {
		cout << " !" << endl;
		cout << array[j][i] << " ";
		b = 0;
		if (j != n && i != n && b == 0) {
			j++;
			b++;
		}
		if (i != n && j == n && b == 0) {
			i++;
			b++;
		}
		if (i == n && j == n && b == 0) {
			j--;
			b++;
		}
		if (i == n && j != n && b == 0) {
			i--;
			b++;
		}
		if (i == n || j == n && b == 0) {
			n--;
		}
		a--;
	} while (a > 0);
	return 0;
}
