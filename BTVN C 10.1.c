#include <stdio.h>

int main() {
    int n, value, count = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can kiem tra: ");
    scanf("%d", &value);
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Gia tri %d ton tai tai vi tri %d\n", value, i);
            count = 1;
        }
    }
    if (!count) {
        printf("Gia tri %d khong ton tai trong mang.\n", value);
    }

    return 0;
}

