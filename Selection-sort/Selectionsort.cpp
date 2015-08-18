#include <iostream>
#include <iterator>
#include <utility>

template<typename T>
void SelectionSort(T arr[], const int& n)
{
	int pos_min;

	for (int i = 0; i < n - 1; i++)
	{
		pos_min = i;

		for (int j = i + 1; j < n; j++)
			// pos_min will keep track of the index that min is in, 
			// this is needed when a swap happens
			if (arr[j] < arr[pos_min]) pos_min = j;
			
		// if pos_min no longer equals i than a smaller value must have been found, 
		// so a swap must occur
		if (pos_min != i) std::swap(arr[i], arr[pos_min]);
	}
}

template<typename T>
void Print(const T arr[], const int& n)
{
	for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int main(void)
{
	int arr[] = { 4, 3, 7, 4, 0, 6, 9, 2, 2, 9, 0, 8, 5, 3, 8, 1, 7, 6, 1, 5 };
	const int n = std::end(arr) - std::begin(arr);

	Print(arr, n);
	SelectionSort(arr, n);
	Print(arr, n);
	return 0;
}