#include <algorithm>
#include <iterator>
#include <iostream>

template<typename RandItr>
void HeapSort(RandItr begin, RandItr end)
{
	std::make_heap(begin, end);
	std::sort_heap(begin, end);
}

int main(void) 
{
	short arr[] = { 1000, -22, 255, -1, 2, 7, 33, 10, 177, };

	HeapSort(std::begin(arr), std::end(arr));
	copy(std::begin(arr), std::end(arr), std::ostream_iterator<short>(std::cout, " "));
	std::cout << std::endl;
	return 0;
}