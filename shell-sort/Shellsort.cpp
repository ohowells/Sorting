
#include <iostream>
#include <algorithm>

void ShellSort(int arr[], const int& n)
{
	static constexpr int gap_sequence[] = { 13,9,5,2,1 };

	for (int gap : gap_sequence) if (gap < n)
	{
		for (int i = gap; i < n; ++i)
			for (int j = i - gap; j >= 0 && arr[j] > arr[j + gap]; j -= gap)
				std::swap(arr[j], arr[j + gap]);
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
	ShellSort(arr, n);
	Print(arr, n);
	return 0;
}