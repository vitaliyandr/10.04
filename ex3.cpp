#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int findMax(int arr[], int n) {
    int low = 0, high = n - 1;
    int max = arr[0];
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > max)
            max = arr[mid];
        if (arr[mid] < max)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return max;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = findMax(arr, n);
    cout << "Maximum element is " << x << endl;
    return 0;
}
