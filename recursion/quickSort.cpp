#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s+1; i<=e ; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);
    // left
    int i = s;
    int j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i< pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // partition
    int p = partition(arr, s, e);
    // left
    quickSort(arr, s, p - 1);
    // right
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[] = {2, 5, 1, 7, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}