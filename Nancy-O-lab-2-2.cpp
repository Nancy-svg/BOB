#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	int i, j, k, n;
	cout << "Enter N" << endl;
	cin >> n;

	int* array = new int[n];
	cout << "Enter array" << endl;

	for (i = 0;i < n;i++) {
		cout << "array[" << i + 1 << "] = ";
		cin >> array[i];

	}
	cout << "arrai is : ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";

	}
	cout << " " << endl;
	for (i = 0;i < n - 1;i++) {
		for (j = 0;j < n - 1; j++) {
			if (array[j] > array[j + 1]) {
				k = array[j];
				array[j] = array[j + 1];
				array[j + 1] = k;
			}
		}
	}

	for (i = 0;i < n; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	return 0;
}
