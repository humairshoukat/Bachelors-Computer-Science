/* Radix Sort C++ */


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void radixsort(int arr[], int n)
{
    int i, b[20], m = 0, exp = 1;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > m)
            m = arr[i];
    }
    while (m / exp > 0)
    {
        int bucket[10] = { 0 };
        for (i = 0; i < n; i++)
            bucket[(arr[i] / exp) % 10]++;
        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i - 1];
        for (i = n - 1; i >= 0; i--)
            b[--bucket[(arr[i] / exp) % 10]] = arr[i];
        for (i = 0; i < n; i++)
            arr[i] = b[i];
        exp *= 10;
    }
}

int main()
{
    int arr[20], n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    radixsort(arr, n);
    cout << "Sorted array: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}