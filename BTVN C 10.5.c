#include <stdio.h>

int main() {
    int n, x;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; n > 1; n--) {
        int count = 0;
        for (int j = 1; j < n; j++) {
            if (arr[j-1] > arr[j]) {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                count = 1;
            }
        }
        if (!count) break;
    }
    printf("Mang sau khi sap xep la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    int left = 0, right = n - 1, mid, found = -1;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            found = mid;
            break;
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found != -1) {
        printf("Phan tu %d co mat tai vi tri %d trong mang.\n", x, found);
    } else {
        printf("Phan tu %d khong co trong mang.\n", x);
    }

    return 0;
}

