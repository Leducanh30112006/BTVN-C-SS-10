#include <stdio.h>

int main() {
    int numbers[4] = {7, 1, 5, 3, 4};
    int arrSize = sizeof(numbers) / sizeof(int);
    printf("Mang chua sap xep:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d\t", numbers[i]);
    }

    for (int i = 0; i < arrSize - 1; i++) {
        for (int j = 0; j < arrSize - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    printf("\nMang da sap xep:\n");
    for (int i = 0; i < arrSize; i++) {
        printf("%d\t", numbers[i]);
    }

    return 0;
}
  
