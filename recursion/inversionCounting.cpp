#include <iostream>
using namespace std;

int merge(int *arr, int s, int e)
{
    int cnt = 0;
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *left = new int[len1];
    int *right = new int[len2];
    // copy
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
    }
    // merge
    int i = 0, j = 0;
    k = s;
    while (i < len1 && j < len2)
    {
        if (left[i] < right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            cnt += len1-i;
        }
    }
    while (i < len1)
    {
        arr[k++] = left[i++];
    }
    while (j < len2)
    {   
        arr[k++] = right[j++];
    }
    return cnt;
}

int mergeSort(int *arr, int s, int e)
{
    int cnt = 0;
    if (s >= e)
    {
        return cnt;
    }
    int mid = s + (e - s) / 2;

    // left
    cnt += mergeSort(arr, s, mid);
    // right
    cnt += mergeSort(arr, mid + 1, e);
    cnt += merge(arr, s, e);
    return cnt;
}

int main()
{
    int arr[] = {4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mergeSort(arr, 0, n - 1) << endl;
    return 0;
}