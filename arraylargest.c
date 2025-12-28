#include <stdio.h>

int main() {
    int arr[] = {10, 45, 23, 67, 89, 34};
    int n = 6;

    int largest, secondLargest;

    // Assume first two elements
    largest = secondLargest = arr[0];

    for (int i = 0; i < n; i++) {

        // If current element is greater than largest
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }

        // If current is between largest and secondLargest
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest = %d", secondLargest);
    return 0;
}
