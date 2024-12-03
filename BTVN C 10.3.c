#include <stdio.h>

int main() {
    int numbers[4] = {2, 1, 5, 4, 9, 6};
    int arrSize = sizeof(numbers) / sizeof(int);
    printf("Mang truoc khi duoc sap xep:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d\t", numbers[i]);
    }

    for (int i = 1; i < arrSize; i++) {
        int key = numbers[i];
        int j = i - 1;
        while (j >= 0 && key < numbers[j]) {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = key;
    }

    printf("\nMang sau khi duoc sap xep:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d\t", numbers[i]);
    }

    return 0;
}

