#include <iostream>   
#include <cmath>
using namespace std;
int main()
{
	int i, j, k, d, m, n;
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
	for (i = 0;i < n -1;i++) {
		k = 10000;
		for (j = i + 1;j < n ;j++) {
			if (array[j] < k) {
				k = array[j];
				m = j;
			}
		}
		if (array[i] > k && k != 10000) {
			array[m] = array[i];
			array[i] = k;
		}
	}

cout << "after array is : ";
for (i = 0;i < n;i++) {
	cout << array[i] << " ";
}
return 0;
}