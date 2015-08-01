#include <iostream>
#include <algorithm>

template<typename T>
void Print(T arr[], const int& n)
{
	for (int i = 0; i < n; i ++)
		std::cout << arr[i] << ", ";
}

int Partition(int *arr, const int& left, const int& right)
{
	const int mid = left + (right - left) / 2;
	const int pivot = arr[mid];

	// move the mid point value to the front.
	std::swap(arr[mid], arr[left]);
	int i = left + 1;
	int j = right;

	while (i <= j) 
	{
		while (i <= j && arr[i] <= pivot) i++;

		while (i <= j && arr[j] > pivot) j--;

		if (i < j) std::swap(arr[i], arr[j]);
	}
	std::swap(arr[i - 1], arr[left]);
	return i - 1;
}

void Quicksort(int *arr, const int& left, const int& right, const int& size) 
{

	if (left >= right) return;

	int part = Partition(arr, left, right);
	std::cout << "\nQSC: " << left << "," << right << " part=" << part << "\n\n";
	Print(arr, size);

	Quicksort(arr, left, part - 1, size);
	Quicksort(arr, part + 1, right, size);
}

int main(void) 
{
	int arr[] = { 110, 5, 10,3 ,22, 100, 1, 23 };
	int size = sizeof(arr) / sizeof(arr[0]);

	Print(arr, size);
	Quicksort(arr, 0, size - 1, size);

	return 0;
}