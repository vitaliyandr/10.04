#include <iostream>
using namespace std;

int binarySearch(double arr[], int left, int right, double x)
{
    if (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);

        return binarySearch(arr, mid + 1, right, x);
    }

    return -1;
}

int main()
{
    double arr[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    double x = 4.5;
    int index = binarySearch(arr, 0, n - 1, x);

    if (index == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << index;

    return 0;
}
