#include <stdio.h>

int main() {
    int arr[] = {3, 7, 2, 1, 5, 4};
    int arrSize = sizeof(arr) / sizeof(int);

    for (int i = 0; i < arrSize - 1; i++) {
        int min = i;
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    printf("\nMang da sap xep:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

