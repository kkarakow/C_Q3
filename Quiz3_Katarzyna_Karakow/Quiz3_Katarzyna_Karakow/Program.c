#include<stdio.h>

int main() {
    int n = 100;
    int i = 0;
    int tmp;
    int arr[100];
    int num;
    int j;

    printf("Enter integers(-100 to stop): \n", n);

    while (1) {
        scanf_s("%d", &num);
        if (num == -100) {
            break;
        }
        arr[i++] = num;
    }
    n = i;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    printf("\nSorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
