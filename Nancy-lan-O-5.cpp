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
	cout << endl;

	cout << "arrai is : ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	cout << endl;
	for (i = 1;i < n;i++) {
		k = array[i];
		j = i;
		while (j > 0 && array[j - 1] > k) {
			array[j] = array[j - 1];
			j = j - 1;
		}
		array[j] = k;
	}

	cout << "after array is : ";
	for (i = 0;i < n;i++) {
		cout << array[i] << " ";
	}
	return 0;
}