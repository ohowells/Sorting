#include <iostream>
#include <math.h>

template<typename T>
void Print(T arr[], const short& n) 
{
	for (auto i = 0; i < n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

template<typename T>
void InsertionSort(T arr[], const short& n)
{
	int i, j, key;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1], that are 
		// greater than key, to one position ahead
		// of their current position.
		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main(void)
{
	short arr[] = { 12, 11, 13, 5, 6 };
	short size = std::end(arr) - std::begin(arr);

	InsertionSort(arr, size);
	Print(arr, size);

	return 0;
}