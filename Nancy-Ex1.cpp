#include <iostream>
#include <stdio.h>
using namespace std;
void quicksort(int* arr, int first, int last)
{
	if (first < last)
	{
		int buf, left = first, right = last, pivot = arr[(left + right) / 2];
		do
		{
			while (arr[left] < pivot) left++;
			while (arr[right] > pivot) right--;
			if (left <= right)
			{
				buf = arr[left];
				arr[left] = arr[right];
				arr[right] = buf;
				left++;
				right--;
			}
		} while (left <= right);
		quicksort(arr, first, right);
		quicksort(arr, left, last);
	}
}

int main() {
	int arr[] = { 1, 4, 8, 0, 2, 7 };
	int N = sizeof(arr) / sizeof(int);
	quicksort(arr, 0, N - 1);
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

