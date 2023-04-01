#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        }
        else {
            mergedArr[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }

    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = { 1, 3, 5, 7, 9 };
    int n1 = 5;
    int arr2[] = { 2, 4, 6, 8, 10 };
    int n2 = 5;
    int mergedArr[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, mergedArr);

    cout << "Merged Array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << mergedArr[i] << " ";
    }
    cout << endl;

    return 0;
}
