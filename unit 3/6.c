#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;
    int sumEven = 0, sumOdd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }

    // Display results
    printf("Sum of Even numbers = %d\n", sumEven);
    printf("Sum of Odd numbers = %d\n", sumOdd);

    // Free allocated memory
    free(arr);

    return 0;
}
