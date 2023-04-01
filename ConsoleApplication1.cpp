#include <iostream>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[])
{
    int i = 0; // індекс першого масиву
    int j = 0; // індекс другого масиву
    int k = 0; // індекс результуючого масиву

    // проходимо по масивам та порівнюємо їх елементи
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        }
        else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // додаємо залишки елементів з першого масиву
    while (i < size1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    // додаємо залишки елементів з другого масиву
    while (j < size2) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main()
{
    int arr1[] = { 1, 3, 5, 7, 9 };
    int size1 = 5;
    int arr2[] = { 2, 4, 6, 8, 10 };
    int size2 = 5;
    int result[10];

    mergeArrays(arr1, size1, arr2, size2, result);

    std::cout << "Result: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
