# include <iostream>

template<typename T>
void BubbleSort(const T& arr[], const short& n)
{
    short temp = 0;
    for (auto i = 0; i < n; i++)
    {
        for(auto j = 0; j < n-1; j++)
        {
            if(arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template<typename T>
static void PrintArray(const T& arr[], const short& n)
{
    for (auto i = 0; i < n; i++)
        std::cout << arr[i] << std::endl;
}

int main(void)
{
    int arr[] = { 5, 4, 12, 36, 1, 9, 11, 24, 100, 50 };

    BubbleSort(arr, 10);
    PrintArray(arr, 10);

    return 0;
}
