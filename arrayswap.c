#include <stdio.h>

int main() {
    int arr[] = {5, 10, 15};
    int i = 0, j = 2;   // indices to swap
    int temp;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

    printf("After swap:\n");
    for (int k = 0; k < 3; k++)
        printf("%d ", arr[k]);

    return 0;
}
