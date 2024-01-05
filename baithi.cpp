#include <stdio.h>

int main() {
    int n, i, last_even = -1;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap %d so nguyen:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            last_even = arr[i];
        }
    }
    if (last_even == -1) {
        printf("No EVEN number\n");
    } else {
        printf("So chan cuoi cung cua mang la %d\n", last_even);
    }
    return 0;
}
