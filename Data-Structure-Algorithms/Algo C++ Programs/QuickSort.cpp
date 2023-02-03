/* Quick Sort C++ */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void quickSort(int[], int, int);
int partition(int[], int, int);

int main()
{
    int arr[50], n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void quickSort(int arr[], int low, int high)
{
    int pivot;
    if (low < high)
    {
        pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot, i, j, temp;
    pivot = arr[low];
    i = low;
    j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
            i++;
        while (arr[j] > pivot && j >= low)
            j--;
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}